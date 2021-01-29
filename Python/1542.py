linha=input().split(" ")
while len(linha) > 1 and linha[0] != 0 :
    
    x=int(linha[0])
    z=int(linha[1])
    y=int(linha[2])

    paginas=((z*y)/(y-x))*x
    paginas//=1
    print("{:.0f} paginas".format(paginas))
    linha=input().split(" ")