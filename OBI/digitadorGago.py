#https://judge.beecrowd.com/pt/problems/view/2815

palavras = input().split()

flag = False

for s in palavras:
    if(flag):
        print(end=" ")
    else:
        flag = True

    if(len(s) < 4):
        print(s, end="")
        continue
    

    if(s[0] == s[2] and s[1] == s[3]):
        s = s[:2]+s[4:]
    
    print(s, end="")

print()