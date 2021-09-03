#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int n;
string s;
map<string, int> m;

int main(){
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> s;
		sort(s.begin(), s.end());
		m[s] = 1;
		
	}
	
	cout << m.size();

}