n = int(input())

lista = list(map(int, input().split()))
maior = max(lista)

while(maior > 0):
    for i in range(n):
        if(lista[i] < maior): 
            print(0, end=" ")
        else:
            print(1, end=" ")
            
        
    maior -= 1
    print()