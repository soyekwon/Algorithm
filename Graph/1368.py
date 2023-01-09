# 크루스칼 이용
import sys
import heapq

n = int(input())
pq = []
parents = [i for i in range(n+1)]

for i in range(1, n+1):
    heapq.heappush(pq, [int(sys.stdin.readline().rstrip()), 0, i])

for i in range(1, n+1):
    line = list(map(int, sys.stdin.readline().rstrip().split()))
    for j in range(1, n+1):
        if i == j: continue
        heapq.heappush(pq, [line[j-1], i, j])

def find(node):
    if parents[node] == node:
        return node
    else:
        parents[node] = find(parents[node])
        return parents[node]

def union(node1, node2):
    root1, root2 = find(node1), find(node2)
    if root1 == root2:
        return False
    else:
        parents[root2] = root1
        return True

total = 0
while pq:
    cur_cost, node1, node2 = heapq.heappop(pq)
    if union(node1, node2):
        total += cur_cost

print(total)
