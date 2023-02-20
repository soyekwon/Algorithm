n = int(input())

nn = list(map(int, input().split()))
copy_nn = nn
nn = sorted(list(set(nn)))  # set으로 중복을 제거하여 정렬

dict = {nn[i] : i for i in range(len(nn))}  # dict 활용해서 key, value쌍으로 {원소 값: 순서(idx)} 저장

for i in copy_nn:
    print(dict[i], end = ' ')