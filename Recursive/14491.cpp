#include <iostream>
using namespace std;

int n;

void rec(int n){
	if(n<9){
		cout << n;
		return;
	}
	rec(n/9);
	cout << n%9;
	
	
	
}

int main(){
	cin >> n;
	rec(n);
}