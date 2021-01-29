suspeitos=[]
n=int(input())
while (n!=0):
    linha=input().split(" ")
    for i in range(n):
        suspeitos.append(linha[i])
    suspeitos=[int(x) for x in suspeitos] 
    suspeitos.sort(reverse=True)
    
    for i in range(n):
        if (suspeitos[1]==int(linha[i])): print(i+1)
    suspeitos=[]
    n=int(input())