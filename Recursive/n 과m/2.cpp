#include <iostream>
using namespace std;

int n,m;
int nn[10];
int check[10]={0,};

void rec(int x, int xx){
	if(x>m){
		return;
	}
	if(x==m){
		for(int i=0; i<m; i++){
			cout << nn[i] <<" ";
		}
		
		cout << endl;
		return;
	}
	
	for(int i=xx; i<n; i++){
		if(check[i]==0){
			check[i]=1;
			nn[x] = i+1;
			rec(x+1, i+1);
			check[i]=0;
		}
	}
	
}

int main(){
	cin >> n >> m;
	rec(0,0);
}