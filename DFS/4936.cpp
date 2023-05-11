#include <iostream>
using namespace std;
 
int w, h;
int map[50][50];
bool visited[50][50];
int dy[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, -1, 1};
 
void reset() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            map[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}
 
void DFS(int y, int x) {
    visited[y][x] = true;
    for (int i = 0; i < 8; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= h || nx >= w)
            continue;
        if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
            DFS(ny, nx);
        }
    }
}
 
int main() {
    while (true) {
        reset();
        cin >> w >> h;
 
        if (w == 0 && h == 0) {
            break;
        }
 
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> map[i][j];
            }
        }
 
        int cnt = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (map[i][j] == 1 && visited[i][j] == 0) {
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}