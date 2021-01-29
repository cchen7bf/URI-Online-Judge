me=0
he=0
de=0

linha1=input().split(" ")
dia1=int(linha1[1])
linha2=input().split(" ")
h1=int(linha2[0])
m1=int(linha2[2])
s1=int(linha2[4])

linha3=input().split(" ")
dia2=int(linha3[1])
linha4=input().split(" ")
h2=int(linha4[0])
m2=int(linha4[2])
s2=int(linha4[4])

if (s2>=s1): sr=s2-s1
elif (s2<s1):
    sr=60-s1+s2
    me=1

if (m2>=me+m1): mr=m2-(m1+me)
elif (m2<me+m1):
    mr=60-(m1+me)+m2
    he=1

if (h2>=he+h1): hr=h2-(h1+he)
elif (h2<he+h1):
    hr=24-(h1+he)+h2
    de=1
    
dr=dia2-(dia1+de)

print("{} dia(s)" .format(dr))
print("{} hora(s)" .format(hr))
print("{} minuto(s)" .format(mr))
print("{} segundo(s)" .format(sr))
