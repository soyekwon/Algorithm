#include <iostream>
#include <stack>
using namespace std;

int t, n, cnt;
int sum=0;

int main(){
	//freopen("input.txt","r",stdin);
	
	cin >> t;
	stack<char> st;
	
	for(int i=0; i<t; i++){
		cin >> n;
		if(n!=0){
			st.push(n);
		}
		else{
			st.pop();
		}
	}
	cnt = st.size();
	for(int i=0; i<cnt; i++){
		sum += st.top();
		st.pop();
	}
	cout << sum;
}
