f=0
m=0

n=int(input())
for i in range(n):
    linha=input().split(" ")
    nome=linha[0]
    sexo=linha[1]
    if (sexo=='F'): f+=1
    elif (sexo=='M'): m+=1

print("{} carrinhos" .format(m))
print("{} bonecas" .format(f))