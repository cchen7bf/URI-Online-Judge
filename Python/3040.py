n=int(input())
for i in range(n):
    linha=input().split(" ")
    altura=int(linha[0])
    diametro=int(linha[1])
    galho=int(linha[2])
    if(altura>=200 and altura<=300 and diametro>=50 and galho>=150): print("Sim")
    else: print("Nao")