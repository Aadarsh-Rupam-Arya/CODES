# here we can see that by using try and except functions if try wont execute it wont give error where we have used it 

# for example if we have given the input not as in terms as requierd take it as a string 
    # then,
            # the code wont give error in written but inspite of it will run the except part



a= ( input("enter a num : "))        

print(f"Multiplication table of {a} is :")


try:
    for i in range (1,11):
        print(f"{a} X {i} = {int(a)*i}",)     
except:
    print("Invalid input")

print("hello world")















