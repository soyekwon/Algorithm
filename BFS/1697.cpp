#include <iostream>
#include <queue>
using namespace std;

int n, k;
queue<int> q1;
queue<int> q2;
int check[100001];

void bfs(int x){
	q1.push(x);
	q2.push(0);
	check[x] = 1;
	do{
		int temp = q1.front();
		int dist = q2.front();
//		cout << temp << " " << dist << "\n";
		q1.pop();
		q2.pop();
		
		if(temp==k){
			cout << dist;
			break;
		}
		
		if(temp+1<=100000 && check[temp+1]==0){
			q1.push(temp+1);
			q2.push(dist+1);
			check[temp+1] = 1;
		}
		
		if(temp-1>=0 && check[temp-1]==0){
			q1.push(temp-1);
			q2.push(dist+1);
			check[temp-1] = 1;
		}
		
		if(2*temp<=100000 && check[2*temp]==0){
			q1.push(2*temp);
			q2.push(dist+1);
			check[2*temp] = 1;
		}
		
	}while(1);
}

int main(){
	cin >> n >> k;
	bfs(n);
}