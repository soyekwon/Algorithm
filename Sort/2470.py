n = int(input())

nn = list(map(int, input().split()))
nn.sort()  # 오름차순 정렬

left = 0
right = n-1
min = abs(nn[left] + nn[right])
ans = [nn[left], nn[right]]  # 정답 값 저장 

while left < right:  # left가 right보다 작을 때 까지 loop
    if abs(nn[left]+nn[right]) < min:  # 현재 min값보다 작으면
        min = abs(nn[left]+nn[right])  # min값 update
        ans = [nn[left], nn[right]]  # 정답 값 저장 
        if min == 0:  # 0이면 더이상 loop 안돌아도 되므로
      	    break
    
    if nn[left]+nn[right] < 0:	
        left += 1	
    else:
        right -=1
        
print(ans[0], ans[1])