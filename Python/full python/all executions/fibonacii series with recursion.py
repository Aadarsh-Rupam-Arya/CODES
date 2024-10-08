def fibo(a):
    if (a<1):
        print("Enter again")
    elif (a==1):
        return 0
    elif (a==2):
        return 1
    else:
        return (fibo(a-1)+fibo(a-2))
a=int(input("Enter a term: "))
for i in range (1,a+1):
    r=fibo(i)
    print(fibo(r))




