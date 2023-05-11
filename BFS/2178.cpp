#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n, m;
string s;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int map[101][101];
queue<int> qx;
queue<int> qy;
queue<int> qz;

void bfs(){
	qx.push(0);
	qy.push(0);
	qz.push(1);
	while(!qx.empty()){
		int x = qx.front();
		int y = qy.front();
		int z = qz.front();
		qx.pop();
		qy.pop();
		qz.pop();
		
		for(int i=0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(0 > ny || ny >= m || 0 > nx || nx >= n || map[nx][ny] != 1) continue;
			map[nx][ny] = z+1;
			qx.push(nx);
			qy.push(ny);
			qz.push(z+1);
		}
		
		
	};
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> s;
		for(int j=0; j<s.length(); j++){
			map[i][j] = s[j]-'0';
		}
	}
	bfs();
	cout << map[n-1][m-1];
}