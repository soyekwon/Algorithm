#include <iostream>
using namespace std;

int n, k;
int cnt = 1;
int coin[101];
int dy[10001] = {0,};

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for(int i=1; i<=n; i++){
		cin >> coin[i];
	}

	dy[0] = 1;

	for(int i=1; i<=n; i++){
		for(int j=coin[i]; j<=k; j++){
			dy[j] += dy[j-coin[i]];
		}
	}
	
	cout << dy[k];
	
}