#https://judge.beecrowd.com/pt/problems/view/2813

n = int(input())

comprados_casa = 0
comprados_esc = 0
estoque_casa = 0
estoque_esc = 0

for i in range(n):
    ida, volta = input().split()

    if ida == "chuva":
        if estoque_casa > 0:
            estoque_casa -= 1 
        else:
            comprados_casa += 1 
        estoque_esc += 1 

    if volta == "chuva":
        if estoque_esc > 0:
            estoque_esc -= 1 
        else:
            comprados_esc += 1 
        estoque_casa += 1

print(comprados_casa, comprados_esc)
    