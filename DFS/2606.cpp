#include <iostream>
#include <stack>
using namespace std;

int n, m, x, y;
int cnt = 0;
int virus[101][101];
int check[101] = {0,};
stack <int> st;

int main(){
	cin >> n >> m;
	
	while(m--){
		cin >> x >> y;
		virus[x-1][y-1] = 1;     //그래프 입력
		virus[y-1][x-1] = 1;
	}
	
	st.push(1);     //정점1 에서 시작 
	check[0] = 1;
	
	do{
		x = st.top();
		st.pop();
		
		for(int i=0; i<n; i++){
			if(virus[x-1][i]==1&&check[i]==0){   //정점1과 인접해있고 방문하지 않았는지 검사
				st.push(i+1);
				check[i]=1;     //방문했다고 체크 !!
				cnt ++;
			}
		}
		
		if(st.empty()) break;
		
		
	}while(1);
	
	cout << cnt;
	
}