fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)

    count = 1
while count <= 5:
    print("Count:", count)
    count += 1


# Infinite loop example (commented out to prevent actual infinite loop)
def factorial(n):
    if n == 0:  
        return 1
    else:
        return n * factorial(n - 1) 
      
print(factorial(4))

# Function modifies the first element of list
def myFun(x):
    x[0] = 20
lst = [10, 11, 12, 13]
myFun(lst)
print(lst)   # list is modified
# Function tries to modify an integer
def myFun2(x):
    x = 20
a = 10
myFun2(a)
print(a)     # integer is not modified

def square_value(num):
    """This function returns the square
    value of the entered number"""
    return num**2

print(square_value(2))
print(square_value(-4))


#
def myFun(*args, **kwargs):
    print("Non-Keyword Arguments (*args):")
    for arg in args:
        print(arg)

    print("\nKeyword Arguments (**kwargs):")
    for key, value in kwargs.items():
        print(f"{key} == {value}")

# Function call with both types of arguments
myFun('Hey', 'Welcome', first='Geeks', mid='for', last='Geeks')
