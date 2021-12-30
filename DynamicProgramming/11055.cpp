#include <iostream>
using namespace std;

int n;
int mx = 0;
int seq[1001];
int dy[1001];

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> seq[i];
	}

	dy[0] = 0;
	seq[0] = 0;

	for(int i=0; i<=n; i++){
		dy[i] = seq[i];
		for(int j=0; j<i; j++){
			if(seq[i]>seq[j] && dy[i]<dy[j]+seq[i]){
				dy[i] = dy[j] + seq[i];
			}
		}
		if(mx < dy[i]){
			mx = dy[i];
		}

	}

	cout << mx;
	
}