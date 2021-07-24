#include <iostream>
#include <string>
#include <stack>
using namespace std;

string s;

int main(){ 
	//freopen("input.txt","r",stdin);
	
	while(1){
		stack<char> st;
		getline(cin, s);
		if(s=="."){
			break;
		}
		else{
			for(int i=0; i<s.length(); i++){
				
				if(s.at(i)=='(' || s.at(i)==')' || s.at(i)=='[' || s.at(i)==']'){
					if(st.empty()){
						st.push(s.at(i));
					}
					else{
						if(st.top()=='(' && s.at(i)==')'){
							st.pop();
						}
						else if(st.top()=='[' && s.at(i)==']'){
							st.pop();
						}
						else{
							st.push(s.at(i));
						}
					}
				}
				
					
			}
			if(st.empty()){
				cout << "yes" << endl;
			}
			else{
				cout << "no" << endl;
			}
		}
		
	}
}