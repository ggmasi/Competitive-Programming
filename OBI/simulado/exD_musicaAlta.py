#https://judge.beecrowd.com/pt/problems/view/2814

n = int(input())

for t in range(n):
    k, j = input().split()
    k = int(k)
    j = int(j)

    xF = 0
    yF = 0 
    xJ = 0
    yJ = 0

    for i in range(j):
        s = input()
        for l in range(len(s)):
            if(s[l] == 'J'):
                xJ = l
                yJ = i
            elif(s[l] == 'F'):
                xF = l
                yF = i

    deltaX = abs(xF-xJ)*10
    deltaY = abs(yF-yJ)*10

    hip = int((deltaX*deltaX + deltaY*deltaY)**0.5)

    print(int(k/(0.99**hip)), end=" dBs\n")
    


