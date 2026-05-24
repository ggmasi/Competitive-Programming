#https://judge.beecrowd.com/pt/problems/view/1555
n = int(input())

for i in range(n):
    x, y = input().split()
    x = int(x)
    y = int(y)

    r = (3*x)*(3*x) + y*y
    b = 2*x*x + (5*y)*(5*y)
    c = -100*x + y*y*y

    if(r > b and r > c):
        print("Rafael ganhou")
    elif(b > c):
        print("Beto ganhou")
    else:
        print("Carlos ganhou")