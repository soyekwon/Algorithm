#include <iostream>
#include <queue>
using namespace std;

int t, n, k, importance;
int cnt = 0;

int main(){
	cin >> t;
	while(t--){
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> importance;
			q.push({i, importance});
			pq.push(importance);  // 중요도 pq에 push
		}
		while(1){
			int location = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value){
				pq.pop();
				++cnt;
				if(location == k){
					cout << cnt << "\n";
					break;
				}
			}
			else{
				q.push({location, value});
			}
		}
		cnt = 0;
	}
}