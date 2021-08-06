#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;

int main(){
	//freopen("input.txt", "r", stdin);
	
	cin >> n;
	for(int i=1; i<=n; i++){
		q.push(i);
	}
	
	while(q.size()!=1){
		q.pop();
		if(q.size()==1){
			break;
		}
		q.push(q.front());
		q.pop();
	}
	
	cout << q.back();
		
}