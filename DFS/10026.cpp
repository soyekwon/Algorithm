#include <iostream>
using namespace std;

int n;
int cnt = 0;
char color[101][101];
int check[101][101] = {0,};
char c;

void rec(int x, int y){
	check[x][y] = 1;
	if(x-1>=0 && color[x-1][y]==c){
		rec(x-1,y);
	}
	if(x+1<n && color[x+1][y]==c){
		rec(x+1,y);
	}
	if(y-1>=0 && color[x][y-1]==c){
		rec(x,y-1);
	}
	if(y+1<n && color[x][y+1]==c){
		rec(x,y+1);
	}
	return;
}


int main(){
	freopen("input.txt","r",stdin);
    cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> color[i][j]; 
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(check[i][j]==0){
				c = color[i][j];
				cnt++;
				rec(i,j);
			}
		}
	}

    cout << cnt << " ";
	cnt = 0; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			check[i][j] = 0; 
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(color[i][j]==71){
				color[i][j] = 82;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(check[i][j]==0){
                cout << cnt << " ";
				c = color[i][j];
				rec(i,j);
				cnt++;
			}
		}
	}
	
	cout << cnt;
	
	
	

	

	
}
