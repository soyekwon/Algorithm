#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string s, state;
map<string, int> a;
map<string, int>::iterator iter;

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	state = "yes";

    getline(cin, s);
    istringstream ss(s);
        
        if(s=="\n"){
            break;
        }
        else if(a.count(s)!=0){
            a[s] ++;
        }
        else{
            a[s] = 1;
        }

    

    for(iter=a.begin(); iter!=a.end(); iter++){
        if(iter->second != 1){
            state = "no";
            
        }
    }

    cout << state;

	
	



	
}
