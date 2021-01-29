v = [10,45,7,13]
print(v)

def ajusta(v,i):
    for j in range(i+1,len(v)):
        if v[i]>v[j]:
            v[i],v[j] = v[j],v[i]
            
            
def ordena(v):
    for i in range(len(v)):
        ajusta(v, i)
    return (v)

print(ordena(v))