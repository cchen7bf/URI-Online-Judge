joao=0
maria=0

n=int(input())
for i in range(n):
    for j in range(3):
        linha=input().split(" ")
        x1=int(linha[0])
        d1=int(linha[1])
        joao+=x1*d1
    for j in range(3):
        linha2=input().split(" ")
        x2=int(linha2[0])
        d2=int(linha2[1])
        maria+=x2*d2
    if (joao>maria): print("JOAO")
    elif (joao<maria): print("MARIA")
    joao=0
    maria=0