runas=[]
qtd=[]
total=0

linha=input().split(" ")
n=int(linha[0])
g=int(linha[1])

for i in range(n):
    linha2=input().split(" ")
    runas.append(linha2[0])
    qtd.append(int(linha2[1]))

x=int(input())

linha3=input().split(" ")

for i in range(x):
    for j in range(n):
        if (linha3[i]==runas[j]): total+=qtd[j]

print(total)
if (total>=g): print("You shall pass!")
else: print("My precioooous")