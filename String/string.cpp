#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Hello~!!";
	cout << str1 << "\n";

	str1.insert(2, "-----");  // 2번째 idx에 문자열 삽입 
	cout << str1 << "\n";
	
	string str2 = "AABBBAAAA";
	cout << str2 << "\n";
	
	str2.replace(2, 6, "==");  // 2번째 idx부터 6개의 문자열을 "=="로 대체 
	cout << str2 << "\n";
	
	string str3 = "ABCDEFG";
	int find_idx = str3.find("CD");  // 찾는 문자열의 idx, 없으면 -1 반환 
	cout << find_idx << "\n";
	
	string sub_str3 = str3.substr(2,4);  // 2번째부터 4개의 ,sub string
	cout << sub_str3 << "\n";
	
	int n = 1234;
	string n_str =  to_string(n);  // int -> string
	cout << n_str[1] << "\n";
}

