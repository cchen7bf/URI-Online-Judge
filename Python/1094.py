cobaia=0
coelho=0
rato=0
sapo=0

n=int(input())
for i in range(n):
    linha=input().split(" ")
    x=int(linha[0])
    animal=(linha[1])
    if (animal=='C'):
        coelho+=x
    elif (animal=='S'):
        sapo+=x
    elif (animal=='R'):
        rato+=x
    cobaia+=x
    
print("Total: {} cobaias" .format(cobaia))
print("Total de coelhos: {}" .format(coelho))
print("Total de ratos: {}" .format(rato))
print("Total de sapos: {}" .format(sapo))
print("Percentual de coelhos: {:.2f} %" .format((coelho*100)/cobaia))
print("Percentual de ratos: {:.2f} %" .format((rato*100)/cobaia))
print("Percentual de sapos: {:.2f} %" .format((sapo*100)/cobaia))
