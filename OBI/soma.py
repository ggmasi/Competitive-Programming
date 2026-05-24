#https://judge.beecrowd.com/pt/problems/view/3051

n, k = input().split()
n = int(n)
k = int(k)

vetor = list(map(int, input().split()))

prefix = []
prefix.append(0)

for i in range(n):
    prefix.append(prefix[i]+vetor[i])


cnt = 0
ptr_ini = 0
ptr_fim = 0

for i in range(1, n+1):
    while(ptr_ini < i and prefix[i]-prefix[ptr_ini] > k):
        ptr_ini += 1

    while(ptr_fim < i and prefix[i]-prefix[ptr_fim] >= k):
        ptr_fim += 1

    cnt += ptr_fim-ptr_ini

print(cnt)