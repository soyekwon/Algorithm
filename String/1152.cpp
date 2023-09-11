#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 1;
	string str;
	getline(cin, str);
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str[i] == ' '){
			cnt++;
		}
	}

	if (str[0] == ' ') cnt--;
	if (str[len - 1] == ' ') cnt--;

	cout << cnt;
}