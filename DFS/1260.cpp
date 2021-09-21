#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int x,y;
int check[1001] = {0,};
int map[1001][1001];
queue <int> q;

void dfs(int xx){
	check[xx] = 1;
	cout << xx << " ";
	for(int i=1; i<=n; i++){
		if(map[xx][i]==1 && check[i]==0){
			dfs(i);
		}
	}
}

void bfs(int xx){
	q.push(xx);
	check[xx] = 1;
	
	do{
		x = q.front();
		q.pop();
		cout << x << " ";
		
		for(int i=1; i<=n; i++){
			if(map[x][i]==1 && check[i]==0){
				q.push(i);
				check[i] = 1;
			}
		}
		if(q.empty()){
			break;
		}
	}while(1);
}

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m >> v;
	
	for(int i=1; i<=m; i++){
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	
	dfs(v);
	cout << "\n";
	
	for(int i=1; i<=n; i++){
		check[i] = 0;
	}
	
	bfs(v);
}