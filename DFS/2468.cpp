#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int max_h = -1;
int cnt = 0;
vector<int> v;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int input[101][101];
int map[101][101];

void dfs(int x, int y){
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
            
        if (map[nx][ny] == 1) {
            map[nx][ny] = 0;
            dfs(nx, ny);
        }
    }
}

 
void reset() {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            map[i][j] = input[i][j];
        }
    }
    cnt = 0;
}


int main(){
	//freopen("input.txt","r",stdin);
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> input[i][j];
			if(input[i][j]>max_h){
				max_h = input[i][j];
			} 
		}
	}

	for(int h=1; h<=max_h; h++){
		for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (input[i][j] < h) {
                    map[i][j] = 0;
                }
                else {
                    map[i][j] = 1;
                }
            }
        }

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j]==1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		v.push_back(cnt);
		reset();
	}

	sort(v.begin(), v.end(), greater<int>()); 
    cout << v[0];  //최댓값 출력

}
