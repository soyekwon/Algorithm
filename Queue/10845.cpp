#include <iostream>
#include <queue>
#include <string>
using namespace std;

int t, n;
string s;
queue <int> q;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("input.txt", "r", stdin);
	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> s;
		if(s=="push"){
			cin >> n;
			q.push(n);
		}
		else if(s=="pop"){
			if(!q.empty()){
				cout << q.front() << "\n";
				q.pop();
			}
			else{
				cout << "-1" << "\n";
			}
			
		}
		else if(s=="size"){
			cout << q.size() << "\n";
		
		}
		else if(s=="empty"){
			if(!q.empty()){
				cout << 0 << "\n";
			
			}
			else{
				cout <<  1<< "\n";
			}
			
		}
		else if(s=="front"){
			if(!q.empty()){
				cout << q.front() << "\n";
		
			}
			else{
				cout << "-1" << "\n";
			}
			
		}
		else if(s=="back"){
			if(!q.empty()){
				cout << q.back() << "\n";
			
			}
			else{
				cout << "-1" << "\n";
			}
			
		}
	}
}