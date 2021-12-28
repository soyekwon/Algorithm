#include <stdio.h>
int n;
int map[30][30]; 
int x,y;
int dangi=1;
int house=0;
int cnt[500]={0,};
void rec(int x, int y){
	map[x][y]=dangi+1;
	if(x-1>=0 && map[x-1][y]==1){
		house++;
		rec(x-1,y);
	}
	if(x+1<n && map[x+1][y]==1){
		house++;
		rec(x+1,y);
	}
	if(y-1>=0 && map[x][y-1]==1){
		house++;
		rec(x,y-1);
	}
	if(y+1<n && map[x][y+1]==1){
		house++;
		rec(x,y+1);
	}
	return;
}
int main(){
	//freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%1d",&map[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(map[i][j]==1){
				x=i;
				y=j;
				rec(x,y);
				dangi++;
				cnt[dangi-2]=house+1;
				house=0;
			}
		}
	}
	
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			printf("%d ",map[i][j]);
//		}
//		printf("\n");
//	}

	for(int i=0; i<dangi-2; i++){
		for(int j=0; j<dangi-2-i; j++){
			if(cnt[j]>cnt[j+1]){
				int t = cnt[j];
				cnt[j] = cnt[j+1];
				cnt[j+1] = t;
			}
		}
	}
	if(dangi==1){
		printf("%d\n",0);
		
	}
	else{
	
		printf("%d\n",dangi-1);
		for(int i=0; i<dangi-1; i++){
			printf("%d\n",cnt[i]);
		}
	}
	
}