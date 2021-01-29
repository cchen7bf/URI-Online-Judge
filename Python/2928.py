cont=0
salto=0
impossivel=0
n=int(input())
for i in range(n):
    gelo=input()
    if (gelo[0]=='.'): salto+=1
    elif (salto>0 and salto<=2 and gelo[0]=='-'):
        salto=0
        cont+=1
    elif (salto>2):
        impossivel=1
    elif (salto<=2 and gelo[0]=='.' and i==n-1): cont+=1
    print("i: {}".format(i))

if (impossivel==0): print(cont)
else: print("N")
    