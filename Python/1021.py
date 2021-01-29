a=float(input())

c100=0
c50=0
c20=0
c10=0
c5=0
c2=0
m100=0
m50=0
m25=0
m10=0
m5=0
m1=0

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

while (a>=1):
    a-=1
    m100+=1

while (a>=0.5):
    a-=0.5
    m50+=1

while (a>=0.25):
    a-=0.25
    m25+=1

while (a>=0.10):
    a-=0.10
    m10+=1

while (a>=0.05):
    a-=0.05
    m5+=1

while (a!=0):
    a = round(a,3)-0.01
    m1+=1
    
print("NOTAS:")    
print("{} nota(s) de R$ 100.00".format(c100))
print("{} nota(s) de R$ 50.00".format(c50))
print("{} nota(s) de R$ 20.00".format(c20))
print("{} nota(s) de R$ 10.00".format(c10))
print("{} nota(s) de R$ 5.00".format(c5))
print("{} nota(s) de R$ 2.00".format(c2))
print("MOEDAS:")
print("{} moeda(s) de R$ 1.00".format(m100))
print("{} moeda(s) de R$ 0.50".format(m50))
print("{} moeda(s) de R$ 0.25".format(m25))
print("{} moeda(s) de R$ 0.10".format(m10))
print("{} moeda(s) de R$ 0.05".format(m5))
print("{} moeda(s) de R$ 0.01".format(m1))