#include <iostream>
using namespace std;

int t, n, m;
int coin[21];
int dy[10001] = {0,};

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> coin[i];
		}
		cin >> m;

		dy[0] = 1;
		for(int i=1; i<=n; i++){
			for(int j=coin[i]; j<=m; j++){
				dy[j] += dy[j-coin[i]];
			}
		}

		cout << dy[m] << "\n";

		for(int i=1; i<=m; i++){
			dy[i] = 0;
		}


	}

	
}