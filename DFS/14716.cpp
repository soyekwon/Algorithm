#include <iostream>
using namespace std;

int m, n;
int nx, ny;
int cnt = 1;
int dx[8] = {-1, 1, 0, 0, -1, 1, 1, -1};
int dy[8] = {0, 0, -1, 1, -1, -1, 1, 1};
int li[251][251];

void dfs(int x, int y){
	li[x][y] = cnt;
	for(int i=0; i<8; i++){
		nx = x + dx[i];
		ny = y + dy[i];
		if(0 > ny || ny >= n || 0 > nx || nx >= m || li[nx][ny] != 1) continue;
		dfs(nx,ny);
	}
}


int main(){
	//freopen("input.txt","r",stdin);
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> li[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(li[i][j]==1){
				cnt ++;
				dfs(i,j);
			}
		}
	}

	cout << cnt -1;
	
}
