#include <iostream>
#include <queue>
using namespace std;

int n, m;
int x, y, z, nx, ny;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int miro[101][101];
queue<int> q1;
queue<int> q2;
queue<int> q3;

void bfs(){
	q1.push(0);
	q2.push(0);
	q3.push(1);

	while(q3.size()!=0){
		x = q1.front();
		q1.pop();
		y = q2.front();
		q2.pop();
		z = q3.front();
		q3.pop();

		for(int i=0; i<4; i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(0 > ny || ny >= m || 0 > nx || nx >= n || miro[nx][ny] != 1) continue; // 정점과 인접해있고 전에 방문하지 않았는지 체크 
			miro[nx][ny] = z+1;
			q1.push(x+1);
			q2.push(y+1);
			q3.push(z+1);
		}
	}

}



int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for(int i=0; i<n; i++){     // 그래프 입력
		for(int j=0; j<m; j++){
			scanf("%1d", &miro[i][j]);
		}
	}

	bfs();

	cout << z;


}