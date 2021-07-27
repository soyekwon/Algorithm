#include <iostream>
#include <stack>
using namespace std;

int t, n;
int check = 1;
int cnt = 0;
stack<int> st1;
int store[100000];
char pm[200000];
int j = 0;

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> store[i];
	}
	
	do{
		if(st1.size()==0 || st1.top()<store[cnt]){
			st1.push(check++);
			pm[j++] = '+';
		}
		else if(st1.top()==store[cnt]){
			st1.pop();
			pm[j++] = '-';
			cnt ++;
		}
		else if(st1.top()>store[cnt]){
			cout << "NO" << endl;
			return 0;
		}
		if(check>t+1){
			break;
		}
		
	}while(1);
	

    for(int i=0; i<j-1; i++){
		cout << pm[i] << endl;
	}
	

		
}