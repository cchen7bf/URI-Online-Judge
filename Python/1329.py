m=0
j=0
n=int(input())
while (n!=0):
    linha=input().split(" ")
    for i in range(n):
        x=int(linha[i])
        if x==1: j+=1
        elif x==0: m+=1
    print("Mary won {} times and John won {} times" .format(m, j))
    m=0
    j=0
    n=int(input())
