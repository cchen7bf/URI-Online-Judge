linha=input().split(" ")
a=float(linha[0])
g=float(linha[1])
ra=float(linha[2])
rg=float(linha[3])

p1=a/ra
p2=g/rg

if (p1<p2): print("A")
else: print("G")