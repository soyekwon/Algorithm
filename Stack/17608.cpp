#include <iostream>
using namespace std;

int t, n;
int b;
int p=0;

int nn[100000];
int st[100000];

int main(){
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		nn[i] = n;
	}
	
	st[p] = nn[t-1];
	p++;
	b = st[p-1];
	
	for(int i=t-2; i>=0; i--){
		if(nn[i]>b){
			st[p] = nn[i];
			p++;
			b = st[p-1];
		}
	}
	
	cout << p;
	
	
}