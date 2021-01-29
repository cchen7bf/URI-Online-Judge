sinal=[]
nome=[]
n=int(input())

for i in range(n):
    linha=input().split(" ")
    sinal.append(linha[0])
    nome.append(linha[1])
nome.sort()
for i in range(n):
    print(nome[i])
print("Se comportaram: {} | Nao se comportaram: {}" .format(sinal.count('+'), sinal.count('-')))