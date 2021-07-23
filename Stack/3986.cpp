#include <iostream>
#include <string>
#include <stack>
using namespace std;

int n;
int cnt = 0;
string s;


int main(){
    //freopen("input.txt", "r", stdin);

	cin >> n;
	for(int i=0; i<n; i++){
		stack<char> st;
        cin >> s;
        for(int j=0; j<s.length(); j++){
        	if(st.empty()){
        		st.push(s.at(j));
			}
			else{
				if(s.at(j)==st.top()){
	                st.pop();
	            }
	            else{
	                st.push(s.at(j));
	            }
			}
        }
        
        if(st.empty()){
         
            cnt ++;
        }
    }
    cout << cnt;
	
}
