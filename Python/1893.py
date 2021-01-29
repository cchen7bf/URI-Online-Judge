linha=input().split(" ")
d1=int(linha[0])
d2=int(linha[1])

if (d1<d2 and d2>=3 and d2<=96): print("crescente")
elif (d2>=97 and d2<=100): print("cheia")
else:
    if (d1>d2 and d2>=3 and d2<=96): print("minguante")
    else: print("nova")