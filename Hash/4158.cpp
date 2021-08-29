#include <iostream>
#include <map>
using namespace std;

int n, m, tem;
int pro;
int cnt = 0;
map<int, int> a;
map<int, int>::iterator iter;

int main(){
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while(1){
	
		cin >> n >> m;
		
		if(n==0 && m==0){
			cout << cnt << "\n";
			cnt = 0;
			break;
		}
		else{
			for(int i=0; i<n+m; i++){
				cin >> tem;
				if(a.find(tem)!= a.end()){ //find
					cnt ++;
				}
				else{
					a[tem] = i+1;
				}
			
			}
		}
		
		
	}
	
	

	
	
	
}