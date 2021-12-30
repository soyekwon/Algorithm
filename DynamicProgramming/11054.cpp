#include <iostream>
using namespace std;

int n;
int mx = 0;
int a[1001];
int dy1[1001]={0,};
int dy2[1001]={0,};

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	
	a[0] = 0;
	a[n+1] = 0;


	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j] && dy1[j]+1 > dy1[i]){
				dy1[i] = dy1[j]+1;
			}

			if(a[n+1-i]>a[n+1-j] && dy2[n+1-j]+1>dy2[n+1-i]){
				dy2[n+1-i] = dy2[n+1-j]+1;
			}

		
		}
	}

	for(int i=1; i<=n; i++){
		if(dy1[i]+dy2[i]-1>mx){
			mx = dy1[i]+dy2[i]-1;
		}
	}
	
	cout << mx;
	
}