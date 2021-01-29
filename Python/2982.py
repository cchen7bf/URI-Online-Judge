g=0
v=0

n=int(input())
for i in range(n):
    linha=input().split(" ")
    x=linha[0]
    y=int(linha[1])
    if (x=='G'): g+=y
    elif (x=='V'): v+=y
if (g>v): print("NAO VAI TER CORTE, VAI TER LUTA!")
else: print("A greve vai parar.")
    