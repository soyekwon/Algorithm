#include <iostream>
#include <queue>
using namespace std;

int n, k;
int cnt = 1;
queue <int> q;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("input.txt", "r", stdin);
	cin >> n;
    cin >> k;

    for(int i=0; i<n; i++){
        q.push(i+1);
    }

    cout << "<";
    while(!q.empty()){
        if(cnt==k){
            if(q.size()==1){
                cout << q.front(); 
                q.pop();
                cnt = 1;
            }
            else{
                cout << q.front() << ", "; 
                q.pop();
                cnt = 1;
            }
        }
        else{
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }
    cout << ">";
	

	
}