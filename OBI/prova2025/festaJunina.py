e = int(input())
s = int(input())
l = int(input())

res = 0

if((e > s and e < l) or (e < s and e > l)):
    res = abs(e-s) + abs(l-s) + abs(l-e)

if(e < s and e < l):
    if(l > s):
        res = (l-e)*2
    else:
        res = (s-e)*2

if(e > s and e > l):
    if(l < s):
        res = (e-l)*2
    else:
        res = (e-s)*2

print(res)