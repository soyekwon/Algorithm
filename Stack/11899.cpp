#include <iostream>
#include <string>
#include <stack>
using namespace std;

string s;
stack<char> st;

int main(){ 
	//freopen("input.txt","r",stdin);
	
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
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
	cout << st.size();
}