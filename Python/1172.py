x=[0,0,0,0,0,0,0,0,0,0]
for i in range(10):
    x[i]=int(input())
    if (x[i]<=0): x[i]=1

for i in range(10):
    print("X[{}] = {}" .format(i, x[i]))