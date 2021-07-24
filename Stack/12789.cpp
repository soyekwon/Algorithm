#include <iostream>
#include <stack>
using namespace std;

int t, n, cnt;
int check = 1;
stack<int> st;

int main(){ 
	//freopen("input.txt","r",stdin);
	
	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> n;
		if(n==check){
			check++;
		}
		else{
			st.push(n);
		}
		if(!st.empty() && st.top()==check){
			
			cnt = st.size();
			for(int i=0; i<cnt; i++){
				if(st.top()==check){
					check ++;
					st.pop();
				}
			}
		}
		
				
	}
	
	if(check-1==t){
		cout << "Nice";
	}
	else{
		cout << "Sad";
	}
	
}