def func():
    try:
        num = int(input("enter a num: "))
        a = [20, 6, 345, 2, 5, 7]
                      # so if the index is out of range or not entered as the req input then it will go with the except part
        print(a[num])
    except IndexError:
        print("invalid index")
    except ValueError:
        print("invalid input")


    # finally:
    return "I am  always executed"


x=func()

print(x)