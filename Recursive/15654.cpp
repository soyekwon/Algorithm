#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int per[10];
int nn[10];
int check[10] = {0,};

void rec(int x){
	if(x>m){
		return;
	}
	if(x==m){
		for(int i=0; i<m; i++){
			cout << nn[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=0; i<n; i++){
		if(check[i]==0){
			check[i] = 1;
			nn[x] = per[i];
			rec(x+1);
			check[i] = 0;
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> per[i];
	}

	sort(per, per+n);
	rec(0);
}