#include <iostream>
#include <string>
using namespace std;

int stack[10000];
int sp=0;
string com;

void fun(string com){
	if(com.compare("push")==0){
		int n;
		cin >> n;
		stack[sp]=n;
		sp++;
	}
	else if(com.compare("pop")==0){
		if(sp==0){
			cout << -1 << endl;
		}
		else{
			cout << stack[sp-1] << endl;
			stack[sp-1]=0;
			sp--;
		}
	}
	else if(com.compare("size")==0){
		cout << sp << endl;
	}
	else if(com.compare("empty")==0){
		if(sp==0){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	else if(com.compare("top")==0){
		if(sp==0){
			cout << -1 << endl;
		}
		else{
			cout << stack[sp-1] << endl;
		}
	}
	
	
}

int main(){
	int t;
	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> com;
		fun(com);
	}
}