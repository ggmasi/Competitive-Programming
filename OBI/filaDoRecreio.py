#https://judge.beecrowd.com/pt/problems/view/1548
n = int(input())

for i in range(n):
    m = int(input())

    vet = list(map(int, input().split()))

    vet2 = list(vet)

    vet2.sort(reverse=True)

    cnt = 0
    for j in range(m):
        if(vet[j] == vet2[j]):
            cnt += 1
    
    print(cnt)