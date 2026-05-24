#https://judge.beecrowd.com/pt/problems/view/3048

n = int(input())

cnt = 1
ant = int(input())

for i in range(n-1):
    temp = int(input())

    if(temp != ant):
        cnt += 1

    ant = temp

print(cnt)