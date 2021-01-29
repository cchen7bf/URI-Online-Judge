p1=0
p2=0

n=int(input())
while (n!=0):
    for i in range(n):
        linha=input().split(" ")
        a=int(linha[0])
        b=int(linha[1])
        if (a>b): p1+=1
        elif (a<b): p2+=1
    print("{} {}" .format(p1, p2))
    p1=0
    p2=0
    n=int(input())