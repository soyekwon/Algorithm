#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string s;
map<string, int> prt;
map<string, int>::iterator iter;

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> s;
		if(prt.find(s) != prt.end()){ //find
			prt[s] ++;
		}
		else{
			prt[s] = 1;
		}
	}
	
	for(int i=0; i<n-1; i++){
		cin >> s;
		if(prt.find(s) != prt.end()){ //find
			prt[s] -- ;
		}
	}

	for (iter = prt.begin(); iter != prt.end(); iter++) {
		if ((*iter).second == 1) { 
			cout << (*iter).first; 

		}
	}
	
	
	
}