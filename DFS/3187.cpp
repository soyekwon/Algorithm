#include <iostream>
using namespace std;

int r, c;
int o, v, to, tv = 0;
char map[300][300];


void dfs(int x, int y){
	map[x][y] = '#';
	if(x-1>=0 && map[x-1][y]!='#'){
		if(map[x-1][y]=='k'){
			o++;
		}
		else if(map[x-1][y]=='v'){
			v++;
		}
		dfs(x-1,y);
	}
	if(x+1<r && map[x+1][y]!='#'){
		if(map[x+1][y]=='k'){
			o++;
		}
		else if(map[x+1][y]=='v'){
			v++;
		}
		dfs(x+1,y);
	}
	if(y-1>=0 && map[x][y-1]!='#'){
		if(map[x][y-1]=='k'){
			o++;
		}
		else if(map[x][y-1]=='v'){
			v++;
		}
		dfs(x,y-1);
	}
	if(y+1<c && map[x][y+1]!='#'){
		if(map[x][y+1]=='k'){
			o++;
		}
		else if(map[x][y+1]=='v'){
			v++;
		}
		dfs(x,y+1);
	}
	return;

}

int main(){
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> r >> c;
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> map[i][j]; 
		}
	}

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(map[i][j]!='#'){
				if(map[i][j]=='k'){
					o++;
				}
				else if(map[i][j]=='v'){
					v++;
				}
				dfs(i,j);
				if(v>=o){
					tv += v;
				}
				else{
					to += o;
				}
				o = 0;
				v = 0;
				
			}
		}
	}
	
	cout << to << " " << tv;
	
}
