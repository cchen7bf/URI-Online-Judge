n=int(input())
while(n!=0):
    menor=0
    for i in range(n):
        linha=input().split(" ")
        planeta=linha[0]
        ano=int(linha[1])
        tempo=int(linha[2])
        if (menor==0):
            menor=ano-tempo
            resp=planeta
        elif (ano-tempo<menor):
            menor=ano-tempo
            resp=planeta
                
    print(resp)
    n=int(input())
