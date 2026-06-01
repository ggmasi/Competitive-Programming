#https://judge.beecrowd.com/pt/problems/view/2820
t = int(input())

while(t > 0):
    d = int(input())
    
    caracteres = input().split()

    caracteres.sort()

    n = int(input())
    resposta = ""
    while(n > 0):
        idx = int((n-1)%d)
        resposta = caracteres[idx] + resposta

        n = (n-1)//d

    print(resposta)


    t -= 1