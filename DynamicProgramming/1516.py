import sys
from collections import deque

input = sys.stdin.readline

queue = deque()
N = int(input())

cnt = [0] * (N + 1)
cost = [0] * (N + 1)
graph = [[0] * (N + 1) for _ in range(N + 1)]

for i in range(1, N + 1):
    tmp = list(map(int, input().split()))
    cost[i] = tmp[0]
    for x in tmp[1:-1]:
        graph[i][x] = 1
        cnt[i] += 1

for i in range(1, N + 1):
    if cnt[i] == 0:
        queue.append(i)

while queue:
    x = queue.popleft()
    t = 0
    for i in range(1, N + 1):
        if graph[i][x] == 1:
            cnt[i] -= 1
            if cnt[i] == 0:
                queue.append(i)
        if graph[x][i] == 1:
            t = max(cost[i], t)
    cost[x] += t

for i in range(1, N + 1):
    print(cost[i])
