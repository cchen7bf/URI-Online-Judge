primeiro=0
recorde=0
while True:
    try:
        n=int(input())
        for i in range(n):
            linha=input().split(" ")
            tempo=int(linha[0])
            tempo/=60
            dist=int(linha[1])
            if (primeiro==0):
                print("1")
                primeiro=1
            if (recorde==0):
                recorde=dist/tempo
                dia=i+1                
            elif (recorde<(dist/tempo)):
                recorde=dist/tempo
                print(i+1)
            primeiro=0
            recorde=0
    except (EOFError):
        break