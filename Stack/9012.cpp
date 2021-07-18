#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		string garo;
		cin >> garo;
		int len = garo.length();
		int ln=0;
		int cnt=0;
		for(int j=0; j<len; j++){
			if(garo.at(j)=='('){
				ln++;
			}
			else if(garo.at(j)==')'){
				ln--;
			}
			if(ln<0){
				cout << "NO" << endl;
				cnt++;
				break;
			} 
			
			
		}
		if(ln==0&&cnt==0){
			cout << "YES" << endl;
		}
		else if(ln>0||ln<0&&cnt==0) {
			cout << "NO" << endl;
		}
	}
}