# we use custom errors to stop running the file

a= int(input("enter a val bw 5 to 9: "))

if (a<5 or a>9):
    # raise ValueError("Value should be between 5 and 9")
    raise ValueError("value should be bw 5 to 9")
else:
    print("ok")


