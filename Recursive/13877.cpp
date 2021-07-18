#include <iostream>
using namespace std;

int t, tt, n;
int check = 0;
int cnt = 0;
int sum = 0;
int mid = 0;
int st[10];

void rec1(int n){
	if(n<1){
		return;
	}
	rec1(n/10);
	st[cnt] = n%10;
	cnt++;
}

void cal(int b){
	for(int i=cnt-1; i>=0; i--){
		mid = st[i];
		if(b==8 && mid>7){
			check=1;
			return;
		}
		for(int j=0; j<cnt-i-1; j++){
			mid*=b;
		}
	
		sum += mid;
	}
}

int main(){
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> tt;
		cin >> n;
		cout << tt << " ";
		rec1(n);
		cal(8);
		
		if(check==1){
			cout << 0 << " ";
			check =0;
		}
		else{
			cout << sum << " ";
		}
	
		cout << n << " ";
		sum =0;
		cal(16);
		cout << sum << " ";
		cout << endl;
		sum =0;
		cnt =0;
	}
	
}