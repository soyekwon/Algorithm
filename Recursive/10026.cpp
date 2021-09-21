#include <iostream>
using namespace std;

int n;
char color[101][101];
char color2[101][101];
int cnt = 49;
char c;

void rec(int x, int y){
	color[x][y] = cnt;
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

void rec2(int x, int y){
	color2[x][y] = cnt;
	if(x-1>=0 && color2[x-1][y]==c){
		rec2(x-1,y);
	}
	if(x+1<n && color2[x+1][y]==c){
		rec2(x+1,y);
	}
	if(y-1>=0 && color2[x][y-1]==c){
		rec2(x,y-1);
	}
	if(y+1<n && color2[x][y+1]==c){
		rec2(x,y+1);
	}
	return;
}

int main(){
	freopen("input.txt","r",stdin);
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> color[i][j]; 
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(color[i][j]==71){
				color2[i][j] = 82;
			}
			else{
				color2[i][j] = color[i][j];
			}
		}
	}
	
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout << color2[i][j]; 
//		}
//		cout << "\n";
//	}
//	cout << "\n";
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(color[i][j]>65 && color[i][j]<85){
				c = color[i][j];
				rec(i,j);
				cnt++;
			}
		}
	}

	cout << cnt - 49 << " ";
	
	cnt = 49;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(color2[i][j]>65 && color2[i][j]<85){
				c = color2[i][j];
				rec2(i,j);
				cnt++;
			}
		}
	}
	
	cout << cnt - 49;
	
	
	

	

	
}