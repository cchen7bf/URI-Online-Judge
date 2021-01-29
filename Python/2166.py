def raiz(n):
    if n==0: return 0
    else: return 1/(2+raiz(n-1))

n=int(input())
print("{:.10f}" .format(1+raiz(n)))