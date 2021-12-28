#include <iostream>
using namespace std;

int m, n;
int nx, ny;
int cnt = 1;
int dx[8] = {-1, 1, 0, 0, -1, 1, 1, -1};
int dy[8] = {0, 0, -1, 1, -1, -1, 1, 1};
int li[251][251];

void dfs(int x, int y){
	li[x][y] = cnt;     // 1과 다른 cnt++을 입력함으로써 이미 방문했음을 체크 -> check 배열 필요없음 
	for(int i=0; i<8; i++){
		nx = x + dx[i];
		ny = y + dy[i];
		if(0 > ny || ny >= n || 0 > nx || nx >= m || li[nx][ny] != 1) continue; // 정점과 인접해있고 전에 방문하지 않았는지 체크 
		dfs(nx,ny);
	}
}


int main(){
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;

	for(int i=0; i<m; i++){     // 그래프 입력 
		for(int j=0; j<n; j++){
			cin >> li[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(li[i][j]==1){     // dfs를 시작할 정점인지 검사 
				cnt ++;
				dfs(i,j);     // dfs 시작
			}
		}
	}

	cout << cnt -1;
	
}
