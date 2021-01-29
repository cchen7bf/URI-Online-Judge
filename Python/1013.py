linha=input().split(" ")
maior=int(linha[0])
a=int(linha[1])
b=int(linha[2])

if (maior<a):
    maior=a
if (maior<b):
    maior=b
    
print("{} eh o maior" .format(maior))