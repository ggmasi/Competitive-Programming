#https://judge.beecrowd.com/pt/problems/view/2247

n = int(input())
contador = 1
while(n != 0):     
    j = 0
    z = 0
    print("Teste", contador)
    for i in range(n):
        tempJ, tempZ = input().split()
        tempJ = int(tempJ)
        tempZ = int(tempZ)

        j += tempJ
        z += tempZ

        print(j-z)
    
    print()
    contador += 1
    n = int(input())