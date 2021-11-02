#include <iostream>
using namespace std;

int n,m;
int gcnt, wcnt = 0;
int maxx = 0;
int map[502][502];

void dfs(int x, int y){
	wcnt ++;
	map[x][y] = gcnt+1;
	if(x-1>=0 && map[x-1][y]==1){
		dfs(x-1,y);
	}
	if(x+1<n && map[x+1][y]==1){
		dfs(x+1,y);
	}
	if(y-1>=0 && map[x][y-1]==1){
		dfs(x,y-1);
	}
	if(y+1<m && map[x][y+1]==1){
		dfs(x,y+1);
	}
	return;
}


int main(){
	//freopen("input.txt","r",stdin);
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> map[i][j]; 
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(map[i][j]==1){
				gcnt ++;
				dfs(i,j);
				if(maxx < wcnt){
					maxx = wcnt;
				}
				wcnt = 0;
			}
		}
	}
	


	cout << gcnt << "\n";
	cout << maxx;
	
	
}
