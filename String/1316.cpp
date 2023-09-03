#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	int flag = 1;
	int ans = 0;
	int check[26] = {0,};
	string s;
	
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> s;
		for(int j=0; j<s.length(); j++){
			if(s[j] != s[j+1]){
				check[s[j]-97] ++;
			}
		}

		for(int j=0; j<26; j++){
			if(check[j] > 1){
				flag = 0;
				break;
			}
		}

		if(flag == 1){
			ans ++;
		}

		flag = 1;
		for(int j=0; j<26; j++){
			check[j] = 0;
		}
	}

	cout << ans;
}