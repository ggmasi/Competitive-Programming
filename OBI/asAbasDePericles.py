#https://judge.beecrowd.com/pt/problems/view/2061
n, m = input().split()

n = int(n)
m = int(m)

for i in range(m):
    temp = input()

    if(temp == "clicou"):
        n -= 1
    else:
        n += 1


print(n)