#include <stdio.h>
struct map{
	int x; 
	int y;
	int z;
};
int x,y,z;
int n,m;
int tail=0;
int head=0;

int nn[101][101]={0,};
map que[10000];
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%1d",&nn[i][j]);
		}
	}
	
	que[tail].x=0;
	que[tail].y=0;
	que[tail].z=1;
	tail++;


	while(1){
		x = que[head].x;
		y = que[head].y;
		z = que[head].z;
		head ++;
		
		
		if(x==n-1 && y==m-1){
			printf("%d",z);
			break;
		}
		if(x-1>=0 && nn[x-1][y]==1){
			que[tail].x=x-1;
			que[tail].y=y;
			que[tail].z=z+1;
			tail++;
			nn[x-1][y]=z+1;
			}
		if(x+1<n && nn[x+1][y]==1){
			que[tail].x=x+1;
			que[tail].y=y;
			que[tail].z=z+1;
			tail++;
			nn[x+1][y]=z+1;
			}
		if(y-1>=0 && nn[x][y-1]==1){
			que[tail].x=x;
			que[tail].y=y-1;
			que[tail].z=z+1;
			tail++;
			nn[x][y-1]=z+1;
			}
		if(y+1<m && nn[x][y+1]==1){
			que[tail].x=x;
			que[tail].y=y+1;
			que[tail].z=z+1;
			tail++;
			nn[x][y+1]=z+1;
			}
		
	}
}
