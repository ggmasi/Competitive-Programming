import sys

sys.setrecursionlimit(300000)

def solve(matriz, i, j, n, m):
    if(matriz[i][j] != 'o'):
        return
    
    if(i+1 < n and matriz[i+1][j] == "."):
        matriz[i+1][j] = 'o'
        solve(matriz, i+1, j, n, m)
    

    if(j+1 < m and i+1 < n and matriz[i][j+1] == '.' and matriz[i+1][j] == '#'):
        matriz[i][j+1] = 'o'
        solve(matriz, i, j+1, n, m)

    if(i+1 < n and j-1 >= 0 and matriz[i][j-1] == '.' and matriz[i+1][j] == '#'):
        matriz[i][j-1] = 'o'
        solve(matriz, i, j-1, n, m)

    return



n, m = input().split()
n = int(n)
m = int(m)

matriz = []
x = -1
y = -1

for i in range(n):
    matriz.append(list(input()))
    
    for j in range(m):
        if(matriz[i][j] == 'o'):
            x = i
            y = j


solve(matriz, x, y, n, m)

for i in range(n):
    print("".join(matriz[i]))



