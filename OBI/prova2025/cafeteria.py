a = int(input())
b = int(input())
c = int(input())
d = int(input())

flag = False


for i in range(c-b, c-a+1):
    if(i%d == 0):
        flag = True
        break

if(flag):
    print("S")
else:
    print("N")