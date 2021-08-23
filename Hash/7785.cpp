#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int t;
string name;
string state;
vector<string> names;
map<string, bool> a;

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> name >> state;
		if(a.count(name)){
			if(state == "enter"){
				a[name] = true;
			}
			else{
				a[name] = false;
			}
		}
		else{
			names.push_back(name);
			a[name] = true;
		}


	}

	sort(names.begin(), names.end(), greater<string>());

	for(int i=0; i<names.size(); i++){
		if(a[names[i]]){
			cout << names[i] << "\n";
		}
	}



	
}
