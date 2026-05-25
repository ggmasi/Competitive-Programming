n, m = input().split()
n = int(n)
m = int(m)

cal = 0

for i in range(n):
    p, g, c = input().split()
    p = int(p)
    g = int(g)
    c = int(c)
    cal += p*4 + g*9 + c*4

print(m-cal)