#include <iostream>
using namespace std;

long long n;

void rec(long long n){
    if(n==0){
    	cout <<0;
        return;
    }
    else if(n==1){
        cout << 1;
        return;
    }
    rec(n/2);
    cout << n%2;
}

int main(){
    //freopen("input.txt","r",stdin);
    cin >> n;
    rec(n);
}