#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string s;
string ss;
map<string, int> a;
map<string, int>::iterator iter;

int main(){
    //freopen("input.txt", "r", stdin);
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        if(a.count(s)>=1){
            a[s] ++;
        }
        else{
            a[s] = 1;
        }
    }
    
    int max = 0;

    for(iter=a.begin(); iter!=a.end(); iter++){
        if(iter->second > max){
            max =  iter->second;
        }
    }
    
    for(iter=a.begin(); iter!=a.end(); iter++){
        if(iter->second == max){
            cout << iter->first;
            break;
        }
    }
    
    



}