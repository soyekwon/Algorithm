#include <iostream>
#include <stack>
#include <string>
using namespace std;

int t =1;
int sum = 0;
string garo;
stack <char> st;
 
int main(){
	//freopen("input.txt", "r", stdin);
	cin >> garo;
	
	for(int i=0; i<garo.length(); i++){
		if(garo[i]=='('){
			t *= 2;
			st.push(garo[i]);
			
		}
		else if(garo[i]=='['){
			t *= 3;
			st.push(garo[i]);
		}
		else if(garo[i]==')'){
			if(st.empty() || st.top()!='('){
				sum = 0;
				break;
			}
			else if(garo[i-1]=='('){
				sum += t;
				t /= 2;
				st.pop();
			}
			else{
				t /= 2;
				st.pop();
			}
		}
		else if(garo[i]==']'){
			if(st.empty() || st.top()!='['){
				sum = 0;
				break;
			}
			else if(garo[i-1]=='['){
				sum += t;
				t /= 3;
				st.pop();
			}
			else{
				t /= 3;
				st.pop();
			}
		}
		
	}
	if(!st.empty()){
		sum = 0;
	}
	cout << sum << "\n";
	
	
}