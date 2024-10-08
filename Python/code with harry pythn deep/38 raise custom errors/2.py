a= int (input("enter the number a: "))
b= int (input("enter the number b: "))

c= a + b 

d=int (input("enter any no d: "))

if (c==d):
    raise ValueError("the value of d and c shouldnt be same")

else:
    print("ok")