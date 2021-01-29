import math

linha=input().split(" ")
a=int(linha[0])
b=int(linha[1])
c=int(linha[2])

if (math.fabs(b-c)<a and a<b+c and math.fabs(a-c)<b and b<a+c and math.fabs(a-b)<c and c<a+b):
    if (a==b and b==c): print("Valido-Equilatero")
    elif (a!=b and b!=c): print("Valido-Escaleno")
    else: print("Valido-Isoceles")
    if(pow(a,2)==pow(b,2)+pow(c,2) or pow(b,2)==pow(a,2)+pow(c,2) or pow(c,2)==pow(b,2)+pow(a,2)): print("Retangulo: S")
    else: print("Retangulo: N")
else: print("Invalido")