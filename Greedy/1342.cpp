#include <iostream>
#include <string>
using namespace std;

int ans = 0;
string s;
int check[27] = {0,};

void rec(int idx, string cc){
	if(idx == s.length()){
		ans ++;
		return;
	}
	
	for (int i = 0; i < 26; i++) {
		if(check[i]==0) continue;
		if(cc!=""& cc[idx-1] == char('a'+i)) continue;
		check[i]--;
		rec(idx+1, cc + char('a'+i));
		check[i]++;
	}
	
}

int main(){
	cin >> s;
	for(int i=0; i<s.length(); i++){
		check[s[i]-'a']++;
	}
	rec(0, "");	
	cout << ans;
	
}