#include <iostream>
#include <stack>
using namespace std;

int n, m, x, y;
int cnt = 0;
int virus[101][101];
int check[101] = {0,};
stack <int> st;

int main(){
	//freopen("input.txt","r",stdin);
	cin >> n >> m;
	
	while(m--){
		cin >> x >> y;
		virus[x-1][y-1] = 1;
		virus[y-1][x-1] = 1;
	}
	
	st.push(1);
	check[0] = 1;
	
	do{
		x = st.top();
		st.pop();
		
		for(int i=0; i<n; i++){
			if(virus[x-1][i]==1&&check[i]==0){
				st.push(i+1);
				check[i]=1;
				cnt ++;
				
			}
			
		}
		
		if(st.empty()) break;
		
		
	}while(1);
	
	cout << cnt;
	
	
	
	
	
	
}