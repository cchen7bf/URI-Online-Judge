favor=0
contra=0
while True:
    try:
        n=int(input())
        linha=input().split(" ")
        for i in range(n):
            x=int(linha[i])
            if (x==1): favor+=1
            elif (x==0): contra+=1
        if (favor/(favor+contra)>=2/3): print("impeachment")
        else: print("acusacao arquivada")
        favor=0
        contra=0
    except (EOFError):
        break