while True:
    try:
        n=int(input())
        for i in range(n):
            x=float(input())
            if (i==0): menor=x
            elif (x<menor): menor=x
        print("{:.2f}" .format(menor))
    except(EOFError):
        break