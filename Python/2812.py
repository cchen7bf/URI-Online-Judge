cont=0
num=[]
r=int(input())
while (cont!=r):
    n=int(input())
    linha=input().split(" ")

    for i in range(n):
        num.append(int(linha[i]))
    num.sort()
    ordenado=num

    for i in range(n):
        if (num[i]%2==0):
            ordenado.pop(i)
    
    for i in range(len(ordenado)):
        print(ordenado[i])
    cont+=1