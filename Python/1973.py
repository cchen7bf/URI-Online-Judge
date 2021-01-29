estrela=[]
pos=1
total=0
ataque=0
soma=0

n=int(input())
linha=input().split(" ")
for i in range(n):
    estrela.append(linha[i])
    soma+=int(linha[i])
typeof(estrela)
while (pos>=1 and pos<=n):
    if(estrela[pos-1]%2==1):
        ataque+=1
        pos+=1
        if (int(estrela[pos-1])!=0):
            estrela[pos-1]=int(estrela[pos-1])-1
            total+=1
    else:
        pos-=1
        if(estrela[pos-1]!=0):
            total+=1


print("{} {}" .format(ataque, soma-total))