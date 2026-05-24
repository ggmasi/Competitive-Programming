#https://judge.beecrowd.com/pt/problems/view/3047

m = int(input())
f1 = int(input())
f2 = int(input())

f3 = m-(f1+f2)

if(f3 > f2 and f3 > f1):
    print(f3)
elif(f2 > f1):
    print(f2)
else:
    print(f1)