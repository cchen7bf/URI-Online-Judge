x=int(input())
fazenda = list(map(int, input().split(" ")))
print(fazenda)

i=0
roubado=0
print(fazenda[i]!=0)
print(fazenda[i])

while(fazenda[i]!=0 and i>=0 and i!=x):
    if (fazenda[i]%2==1):
        roubado+=1
        i+=1
    else:
        roubado+=1
        i-=1
print(roubado)