#include <iostream>
using namespace std;

int n;
int mx = 0;
int a[201];
int dy[201];

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}

	a[0] = 0;
	dy[0] = 0;

	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j] && dy[j]+1>dy[i]){
				dy[i] = dy[j] + 1;
			}
		}
	}

	for(int i=1; i<=n; i++){
		if(dy[i]>mx){
			mx = dy[i];
		}
	}

	cout << n-mx;
	
}