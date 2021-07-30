#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
int cnt = 1, sum;

int main() {
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	

	while (1) {
		cin >> str;  
		
		if (str[0] == '-') break;
		
		sum = 0;
		stack<char> s;
		
		for (int i = 0; i < str.size(); i++) {
			char c = str[i];
			if (c == '}' && !s.empty() && s.top() == '{')
				s.pop();
			else
				s.push(c);
		}
		
		while (!s.empty()) {
			char c1 = s.top();
			s.pop();
			char c2 = s.top();
			s.pop();
			if (c1 == c2) sum++;
			else sum += 2;
		}
		
		cout << cnt << ". " << sum << '\n';
		cnt++;
	}
	return 0;
}