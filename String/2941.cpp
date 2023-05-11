#include <iostream>
#include <string>
using namespace std;

int n, idx;
string str;
string ss[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    cin >> str;

	for(int i=0; i<8; i++){
		while(1){
			idx = str.find(ss[i]);
			if(idx == -1){
				break;
			}
			else{
				str.replace(idx, ss[i].length(), "#");
			}
		}
	}
	cout << str.length();
}

