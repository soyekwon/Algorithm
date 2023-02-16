import sys
import heapq

n = int(input())

time = [tuple(map(int, sys.stdin.readline().split())) for _ in range(n)]
time.sort()  # 시작 시간을 기준으로 오름차순 정렬
heap = []  # 강의실의 종료 시간만 저장하는 min heap

heapq.heappush(heap, time[0][1])

for i in range(1, n):
    if heap[0] > time[i][0]:  # 종료시간이 가장 작은 강의실의 종료시간이 다른 수업의 시작시간 보다 크면 같은 강의실 사용 불가
        heapq.heappush(heap, time[i][1])  # 강의실 추가
    else:  # 그렇지 않으면 같은 강의실 사용 가능 
        # 종료시간을 update
        heapq.heappop(heap)
        heapq.heappush(heap, time[i][1])  

print(len(heap))