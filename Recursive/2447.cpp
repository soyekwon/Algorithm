#include <iostream>
using namespace std;

int n;

void rec(int x, int y, int n){
	if((x/n)%3==1 && (y/n)%3==1){
		cout << " ";
	}
	else{
		if(n/3==0){
			cout << "*";
		}
		else{
			rec(x,y,n/3);
		}
	}
	
	
}

int main(){
    //freopen("input.txt", "r", stdin);
	cin >> n;
    
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			rec(i,j,n);
		}
		cout << endl;
	}
}