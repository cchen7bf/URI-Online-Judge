a=0
b=0
c=0

n=int(input())
letra=input()
if (letra=='A'): a=1
elif (letra=='B'): b=1
elif (letra=='C'): c=1

for i in range(n):
    x=int(input())
    if (x==1):
        aux=a
        a=b
        b=aux
    elif (x==2):
        aux=b
        b=c
        c=aux
    elif (x==3):
        aux=a
        a=c
        c=aux

if (a==1): print("A")
elif (b==1): print("B")
elif (c==1): print("C")
    