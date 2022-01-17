#include <iostream>
using namespace std;

int n;
int card[1001];
int dy[1001] = {0,};

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("input.txt", "r", stdin);

	cin >> n;

	for(int i=1; i<=n; i++){
		cin >> card[i];
	}

	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			if(dy[j] < card[i] + dy[j-i]){
				dy[j] = card[i] + dy[j-i];
			}
		}
	}

	cout << dy[n];
	
}