a = int(input())
inicio=a

c100=0
c50=0
c20=0
c10=0
c5=0
c2=0
c1=0


while (a>=100):
    a=a-100
    c100=c100+1

while (a>=50):
    a=a-50
    c50+=1

while (a>=20):
    a-=20
    c20+=1

while (a>=10):
    a-=10
    c10+=1

while (a>=5):
    a-=5
    c5+=1

while (a>=2):
    a-=2
    c2+=1

while (a!=0):
    a-=1
    c1+=1
    
print(inicio)    
print("{} nota(s) de R$ 100,00".format(c100))
print("{} nota(s) de R$ 50,00".format(c50))
print("{} nota(s) de R$ 20,00".format(c20))
print("{} nota(s) de R$ 10,00".format(c10))
print("{} nota(s) de R$ 5,00".format(c5))
print("{} nota(s) de R$ 2,00".format(c2))
print("{} nota(s) de R$ 1,00".format(c1))