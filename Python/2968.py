cont=1
i=1
linha=input().split(" ")
voltas=int(linha[0])
placas=int(linha[1])
total=voltas*placas
i=total//10
while cont!=10:
    if (i>=(cont*total)/10):
       if(cont!=10): print(i, end="")
       else: print(i)
       cont+=1
       i+=total//10
       if (cont!=10):
           print(" ",end="")
    else:
        i+=1