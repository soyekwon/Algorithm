#include <iostream>
using namespace std;

int n;
int mx = 0;
int t1, t2;
int a[101];
int b[101];
int dy[101];

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i] >> b[i];
	}

	a[0] = 0;
	b[0] = 0;
	dy[0] = 0;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			if(a[j]>a[j+1]){
				t1 = a[j+1];
				a[j+1] = a[j];
				a[j] = t1;
				t2 = b[j+1];
				b[j+1] = b[j];
				b[j] = t2;
				
			}
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			if(b[i]>b[j] && dy[j]+1>dy[i]){
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