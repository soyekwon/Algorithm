#include <iostream>
using namespace std;

int n;
int mx;
int li[1001];
int dy[1001] = {0,};

int main(){
	//freopen("input.txt","r",stdin);
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

    for(int i=1; i<=n; i++){
        cin >> li[i];
    }


    li[0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            if(li[i] > li[j] && dy[i] <= dy[j]){
				dy[i] = dy[j] +1;
            }
        }
    }

    mx = 0;
    for(int i=1; i<=n; i++){
        if(dy[i] > mx){
            mx = dy[i];
        }
    }

    cout << mx;

	
}
