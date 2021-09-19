#include <iostream>
#include <stack>
using namespace std;

int n, m, t;
int x, y;
int check = 0;
int cn = 0;
int cnt = 0;
int ccn = 0;
int cheese[101][101];

bool Check()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cheese[i][j] == 1) return false;
        }
    }
    return true;
}


void rec(int x, int y){
	cheese[x][y]=2;
	if(x-1>=0 && cheese[x-1][y]==0){
		cheese[x-1][y]=2;
		rec(x-1,y);
	}
	if(x+1<n && cheese[x+1][y]==0){
		cheese[x+1][y]=2;
		rec(x+1,y);
	}
	if(y-1>=0 && cheese[x][y-1]==0){
		cheese[x][y-1]=2;
		rec(x,y-1);
	}
	if(y+1<m && cheese[x][y+1]==0){
		cheese[x][y+1]=2;
		rec(x,y+1);
	}
	return;
}

int main(){
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> t;
			cheese[i][j] = t;
		}
	}
	
	while(1){
		
		for (int i = 1; i < n-1; i++){
        	for (int j = 1; j < m-1; j++){
            	if (cheese[i][j] == 1) cn ++;
       		}
    	}
    	ccn = cn;
		rec(0,0);
		
		for(int i=1; i<n-1; i++){
			for(int j=1; j<m-1; j++){
				if(cheese[i][j]==1){
					if(i-1>=0 && cheese[i-1][j]==2){
						cheese[i][j]=3;
					}
					if(i+1<n && cheese[i+1][j]==2){
						cheese[i][j]=3;
					}
					if(j-1>=0 && cheese[i][j-1]==2){
						cheese[i][j]=3;
					}
					if(j+1<m && cheese[i][j+1]==2){
						cheese[i][j]=3;
					}
				}
			}
		}
		
		for(int i=0; i<n+2; i++){
			for(int j=0; j<m+2; j++){
				if(cheese[i][j]==3 || cheese[i][j]==2){
					cheese[i][j]=0;
				}
			}
		}
		cnt ++;
		check = 0;
		cn = 0;
	
		if(Check()){
			cout << cnt << "\n";
			cout << ccn;
			break;
		}	
	}
	
	
}