mae=int(input())
f1=int(input())
f2=int(input())
f3=mae-f1-f2
if(f3>f1 and f3>f2): print(f3)
elif(f2>f1 and f2>f3): print(f2)
elif(f1>f3 and f1>f2): print(f1)