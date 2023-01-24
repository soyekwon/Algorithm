import sys

input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    diff, diffCnt = float('inf'), 0
    
    for i in range(n):
        start = i+1
        end = n-1
        
        while start <= end:
            mid = (start + end)//2
            sum = arr[i] + arr[mid]
            if abs(k-sum) < diff:
                diff = abs(k-sum)
                diffCnt = 1
            elif abs(k-sum) == diff:
                diffCnt += 1
            if sum > k:
                end = mid-1
            else:
                start = mid+1

    print(diffCnt)
