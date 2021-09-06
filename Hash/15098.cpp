#include <iostream>
#include <string>
#include<sstream>
#include<map>
using namespace std;

int check = 0;
string str, ss, s;
map<string, int> ch;

int main(){
	//freopen("input.txt","r",stdin);
	getline(cin, str);
	stringstream ss(str);
	
	while (getline(ss, s, ' ')){
		if(ch.find(s) != ch.end()){ //find
			check = 1;
			break;
		}
		else{
			ch[s] = 1;
		}
    }
    
    if(check == 1){
    	cout << "no" << "\n";
	}
	else{
		cout << "yes" << "\n";
	}
}