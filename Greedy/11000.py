import sys
import heapq

n = int(input())

time = [tuple(map(int, sys.stdin.readline().split())) for _ in range(n)]
time.sort()
heap=[]

heapq.heappush(heap, time[0][1])

for i in range(1, n):
    if heap[0] > time[i][0]:
        heapq.heappush(heap, time[i][1])
    else:
        heapq.heappop(heap)
        heapq.heappush(heap, time[i][1])

print(len(heap))