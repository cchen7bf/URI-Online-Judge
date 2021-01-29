votos=[]
perdeu=0

n=int(input())
for i in range(n):
    votos.append(int(input()))
    
for i in range(1, n):
    if (votos[0]<votos[i]):
        perdeu=1
if (perdeu==0): print("S")
else: print("N")