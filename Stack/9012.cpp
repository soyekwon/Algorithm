#include <iostream>
#include <stack>
#include <string>
using namespace std;

int n;
string str;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //freopen("input.txt","r",stdin);
	
    cin >> n;
    while(n--){
        cin >> str;
        stack<char> st;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='(' || st.empty()){
                st.push(str[i]);
            }
            else{
                if(st.top()=='('){
                	st.pop();
            	}
            }
        }
        if(st.empty()){
        	cout << "YES" << "\n";
		}
		else{
			cout << "NO" << "\n";
		}
    }
}
