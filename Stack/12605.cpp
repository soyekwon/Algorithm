#include <iostream>
#include <stack>
#include <string>
#include <cstring>
using namespace std;

int t;
string s;
char st1[30];
char st2[30];
int sp1, sp2 =0;


int main(){
	//freopen("input.txt", "r", stdin);
	
	cin >> t;
	cin.ignore();
	
	for(int i=0; i<t; i++){
		getline(cin,s);
		for(int j=0; j<s.length(); j++){
			st1[sp1]=s.at(j);
			sp1++;
		}
		cout << "Case #" << i+1 << ": ";
		while(1){
			char c = st1[sp1-1];
			sp1--;
			if(c!=' '){
				st2[sp2] = c;
				sp2++;
			}
			else if(c==' '){
				for(int j=sp2-1; j>=0; j--){
					cout << st2[j];
					sp2--;
				}
				cout << " ";
			}
			if(sp1==0){
				for(int j=sp2-1; j>=0; j--){
					cout << st2[j];
					sp2--;
				}
				cout << " ";
				break;
			}
			
		}
		cout << endl;
	}
	
}