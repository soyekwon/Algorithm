#include <iostream>
#include <string>
#include <map>
using namespace std;

int n,m;
string s;
map<string, int> monster1;
map<int, string> monster2;

int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> s;
        monster1[s] = i;
        monster2[i] = s;
    }
    
    for(int i=0; i<m; i++){
    	cin >> s;
    	if(65 <= (int)s[0] && (int)s[0]<= 90){ // 문자 
    		cout << monster1[s] << "\n";
		}
		else{
			int i = stoi(s);
			cout << monster2[i] << "\n";
		}
	}
	
    
    



}