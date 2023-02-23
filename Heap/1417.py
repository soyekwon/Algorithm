n = int(input())
cnt = 0
arr = []  # input입력 받는 배열
   
for i in range(n):  # input
    t = int(input())
    arr.append(t)


while True:
    max = arr[0]  # 다솜이의 득표수, 다솜이의 득표수랑 비교해야 하므로 
    max_idx = 0  # 다솜이의 idx
    for i in range(1, n):  # 다솜이를 제외하고 가장 최대값을 구함
        if max <= arr[i]:
            max = arr[i]
            max_idx = i
    
    if max_idx == 0:  # 최대값의 idx가 0이라는 것은 다솜이의 득표수가 많다는 것이므로 break
        break
    else:  # 아니면 최대값의 득표수를 -1해서 다솜이의 득표수를 +1
        arr[max_idx] = arr[max_idx]-1
        arr[0] +=1
        cnt +=1
        
print(cnt)