#include <iostream>
using namespace std;

int n, k;
int coin[101];
int dy[10001];

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for(int i=1; i<=n; i++){
		cin >> coin[i];
	}

	for(int i=1; i<=k; i++){
		dy[i] = 10001;
	}

	dy[0] = 0;

	for(int i=1; i<=n; i++){
		for(int j=coin[i]; j<=k; j++){
			if(1+dy[j-coin[i]]<dy[j]){
				dy[j] = 1+dy[j-coin[i]];
			}
		}
	}

	if(dy[k]==10001){
		cout << -1;
	}
	else{
		cout << dy[k];
	}

	
}