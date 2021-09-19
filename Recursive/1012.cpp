#include <iostream>
using namespace std;

int t,m,n,k;
int x,y;
int cnt = 1;
int map[51][51];
void rec(int x, int y){
	map[x][y] = cnt+1;
	if(x-1>=0 && map[x-1][y]==1){
		map[x-1][y] = cnt+1;
		rec(x-1,y);
	}
	if(x+1<n && map[x+1][y]==1){
		map[x+1][y] = cnt+1;
		rec(x+1,y);
	}
	if(y-1>=0 && map[x][y-1]==1){
		map[x][y-1] = cnt+1;
		rec(x,y-1);
	}
	if(y+1<m && map[x][y+1]==1){
		map[x][y+1] = cnt+1;
		rec(x,y+1);
	}
	return;
}

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;
	
	for(int s=0; s<t; s++){
		cin >> m >> n >> k;
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				map[i][j] = 0;
			}
		}
		
		for(int i=0; i<k; i++){
			cin >> y >> x;
			map[x][y] = 1;
		}

		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(map[i][j]==1){
					rec(i,j);
					cnt ++;
				}
			}
		}
		
//		for(int i=0; i<n; i++){
//			for(int j=0; j<m; j++){
//				cout << map[i][j];
//			}
//			cout << "\n";
//		}
//		cout << "\n";
//		
//		
		
		cout << cnt - 1 << "\n";
		cnt = 1;
		
		
	}
	
}