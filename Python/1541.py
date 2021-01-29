linha=input().split(" ")
while len(linha)>1 and linha[0]!=0:
    l1=int(linha[0])
    l2=int(linha[1])
    porc=int(linha[2])
    print("{:.0f}" .format(round((l1*l2*100//porc)**0.5-0.5)))
    linha=input().split(" ")

