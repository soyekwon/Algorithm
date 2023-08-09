#include <iostream>
#include <queue>

using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> b;
    queue<pair<ll,ll>> q;
    q.push({a,1});
    while(!q.empty()){
        ll k = q.front().first; //연산하는 수
        ll cnt = q.front().second; //몇 번 연산했는지 count
        q.pop();

        if(k==b){
            ans = cnt;
            break;
        }
        if(2*k<=b)
            q.push({2*k,cnt+1});
        if(10*k<=b)
            q.push({10*k+1,cnt+1});
    }
    cout << ans;
    return 0;
}