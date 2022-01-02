#include <iostream>
using namespace std;

int n, k, q;
int coin[11];
int cnt = 0;

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for(int i=1; i<=n; i++){
		cin >> coin[i];
	}

	for(int i=n; i>=1; i--){
		q = k/coin[i];
		cnt += q;
		k = k%coin[i];
		if(k==0){
			break;
		}
	}

	cout << cnt;

	
}