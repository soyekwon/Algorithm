import sys

n = int(input())
words = []  # 단어 저장 list
alpha = {}  # 알파벳 저장 dict
nn = []  # 수 저장 list
ans = 0

for i in range(n):
    s = input()
    words.append(s)
     
for i in range(n):
    for j in range(len(words[i])):
        if words[i][j] in alpha:
            alpha[words[i][j]] += 10 ** (len(words[i])-j-1)
        else:
            alpha[words[i][j]] = 10 ** (len(words[i])-j-1)
            
for i in alpha.values():  # dict에 저장된 수들을 모두 리스트에 추가
    nn.append(i)
    
nn.sort(reverse=True)  # 내림차순 정렬
num = 9

for i in nn:
    ans += i*num  # 큰 수부터 9 다음 8.. 차례대로 곱해줌
    num -= 1
    
print(ans)
