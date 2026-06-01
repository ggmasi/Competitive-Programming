#https://judge.beecrowd.com/pt/problems/view/2783

n, c, m = input().split()
n = int(n)
c = int(c)
m = int(m)

cnt = c

carimbadas = [0]*(n)

temp = list(map(int, input().split()))

for i in temp:
    carimbadas[i-1] = 1

temp = list(map(int, input().split()))

for i in temp:
    if(carimbadas[i-1] == 1):
        cnt -= 1
        carimbadas[i-1] = 0

print(cnt)