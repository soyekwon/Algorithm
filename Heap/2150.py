import sys
sys.setrecursionlimit(10 ** 6)

v, e = map(int, sys.stdin.readline().split())
stack = [] # stack
ans = [] # answer
check = [0] * (v + 1)  # 방문 여부 체크
graph = [[] for _ in range(v+1)]  # 정방향 graph
r_graph = [[] for _ in range(v+1)]  # 역방향 graph

for i in range(e):  # 정뱡향, 역방향 graph input
    s, e = map(int, sys.stdin.readline().split())
    graph[s].append(e)
    r_graph[e].append(s)
    
def dfs(node):  # 정방향 graph로 dfs
    check[node] = 1
    for i in graph[node]:
        if check[i] == 0:
            dfs(i)
    stack.append(node)  # dfs탐색이 종료되는 순서대로 stack에 append
    
def r_dfs(node, ssc):  # 역방향 graph로 dfs
    check[node] = 1
    ssc.append(node)
    for i in r_graph[node]:
        if check[i] == 0:
            r_dfs(i, ssc)
            
# 모든 노드에 정방향 dfs 수행
for i in range(1, v):
    if check[i] == 0:
        dfs(i)
        
check = [0] * (v + 1)  # 방문 체크 배열 초기화

while stack:  # stack이 empty될 때까지 진행
    ssc=[]
    node = stack.pop()  # stack에서 pop해서
    if check[node] == 0:
        r_dfs(node, ssc)  # 역방향 dfs진행
        ssc.sort()  # 오름차순으로 print해야 하므로 오름차순 sort
        ans.append(ssc)  # 정답 배열에 append

print(len(ans))
ans.sort()

for i in range(len(ans)):
    for j in range(len(ans[i])):     
        print(ans[i][j], end=" ")
    print(-1)