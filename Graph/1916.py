import sys

input = sys.stdin.readline
INF = int(1e9)

n = int(input())
m = int(input())

edges = [[] for _ in range(n+1)]
check = [0 for i in range(n+1)]  # 방문 체크
dist = [INF] * (n+1)  # 최소 거리

for i in range(m):  # 간선 저장
    a, b, w = map(int, input().split())
    edges[a].append((b, w))

st, ed = map(int, input().split())

def find():  # 최솟 값 idx 찾기
    min = INF
    min_idx = 0
    for i in range(1, n+1):
        if check[i] == 0 and dist[i] < min:
            min_idx = i
            min = dist[i]

    return min_idx

def dijkstra(x):
    check[x] = 1
    dist[x] = 0

    for i in edges[x]:
        if dist[i[0]] > i[1]:
            dist[i[0]] = i[1]

    for i in range(n-1):
        idx = find()
        check[idx] = 1

        for j in edges[idx]:
            b = j[0]
            w = j[1]
            if dist[idx] + w < dist[b]:
                dist[b] = dist[idx] + w

dijkstra(st)
print(dist[ed])

