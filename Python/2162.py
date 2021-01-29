n=int(input())
linha=input().split(" ")
inicio=int(linha[0])
x=int(linha[1])
if (inicio>x):
    for i in range(2, n):
        x=int(linha[i])
    