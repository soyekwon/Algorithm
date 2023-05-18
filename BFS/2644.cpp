#include <iostream>
#include <queue>
using namespace std;

int map[101][101];
int check[101] = {0,};
int check2 = 0;
int n, m, a, b, x, y;
int cnt = 0;
queue <int> q1;
queue <int> q2;

void bfs(int xx){
	q1.push(xx);
	q2.push(cnt);
	check[xx] = 1;
	
	do{
		x = q1.front();
		y = q2.front();
		if(x==b){
			break;
		}
		q1.pop();
		q2.pop();
		
		for(int i=1; i<=n; i++){
			if(map[x][i]==1 && check[i]==0){
				check[i] = 1;
				q1.push(i);
				q2.push(y+1);
			}
		}
		
		if(q1.empty()){  // 가족이 아니면
			check2 = 1;
			break;
		}
	}while(1);
}

int main(){
	freopen("input.txt", "r", stdin);
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	cin >> a >> b;
	cin >> m;
	
	for(int i=0; i<m; i++){
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	
	bfs(a);
	
	if(check2==0){
		cout << q2.front();
	}
	else{
		cout << -1;
	}
}