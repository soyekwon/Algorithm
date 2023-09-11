#include <iostream>
#include <string>
using namespace std;

int n;
int ans = 0;
string s;

int main()
{
	cin >> s;

	for(int i=0; i<n; i++){
		ans += s[i]-'0';
	}

}
