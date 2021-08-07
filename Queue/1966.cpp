#include <iostream>
#include <queue>
using namespace std;

int t;
int n, k, nn;
int cnt = 0;
int idx, val;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("input.txt", "r", stdin);
	
	cin >> t;
	for(int i=0; i<t; i++){
		cnt = 0;
		queue<pair<int, int> > q;
		priority_queue<int> qq;
		cin >> n >> k;
		
		for(int j=0; j<n; j++){
			cin >> nn;
			q.push({j,nn});
			qq.push(nn);
		}
		
		while(!q.empty()){
			idx = q.front().first;
			val = q.front().second;
			q.pop();
			if(qq.top()==val){
				qq.pop();
				cnt ++;
				if(idx==k){
					cout << cnt << "\n";
					break;
				}
			}
			else{
				q.push({idx,val});	
			}		
		}
		
	}
	
}