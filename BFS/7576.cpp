#include <iostream>
#include <queue>
using namespace std;

int m, n;
int x, y, z;
int day = 1;
int cnt = 0;
int map[1001][1001];
queue<int> q1;
queue<int> q2;
queue<int> q3;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("input.txt", "r", stdin);
	
	cin >> m >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> map[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(map[i][j]==day){
				q1.push(i);
				q2.push(j);
				q3.push(day);
			}
		}
	}
	
	do{
		x = q1.front();
		q1.pop();
		y = q2.front();
		q2.pop();
		z = q3.front();
		q3.pop();
		
		
		if(x-1>=0 && map[x-1][y]==0){
			map[x-1][y]=z+1;
			q1.push(x-1);
			q2.push(y);
			q3.push(z+1);
		}
		if(x+1<n && map[x+1][y]==0){
			map[x+1][y]=z+1;
			q1.push(x+1);
			q2.push(y);
			q3.push(z+1);
		}
		if(y-1>=0 && map[x][y-1]==0){
			map[x][y-1]=z+1;
			q1.push(x);
			q2.push(y-1);
			q3.push(z+1);
		}
		if(y+1<m && map[x][y+1]==0){
			map[x][y+1]=z+1;
			q1.push(x);
			q2.push(y+1);
			q3.push(z+1);
		}
		
		if(q1.empty()){
			break;
		}
			
			
	}while(1);
	
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			cout << map[i][j];
//		}
//		cout << "\n";
//	}
//	cout << "\n";
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(map[i][j]!=0){
				cnt++;
			}
		}
	}
	
	
	if(cnt==n*m){
		cout << z -1;
	}
	else{
		cout << -1;
	}
	
	
	
	
}