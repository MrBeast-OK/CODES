# Arithematic Operators (+, -, *, /, %, **)
a = 18
b = 5

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a // b)   #floor division
print(a % b)    #remainder or modulo
print(a ** b)   #a^b (power)

#Relational Operators (==, !=, >, <, >=, <=)
a = 3
b = 20

print(a == b)
print(a != b)
print(a > b)
print(a < b)
print(a >= b)
print(a <= b)
 
 # Assignment Operators (=, +=, -=, *=, /=, %=, **=)
num = 10
num += 10
print("num :", num)

num = 10
num -= 10
print("num :", num)

num = 10
num *= 10
print("num :", num)

num = 10
num /= 10
print("num :", num)

num = 10
num **= 10
print("num :", num)

num = 10
num %= 10
print("num :", num)

#Bitwise Operators (&, |, ^, ~, <<, >>)
a = 10  # 1010
b = 4   # 0100
print("AND :", a & b)  
print("OR  :", a | b)   
print("XOR :", a ^ b)   
print("NOT :", ~a)      
print("Left Shift :", a << 2)  
print("Right Shift :", a >> 2) 

#Logical Operators (not, and, or)
a = 50
b = 30

print(not (a == b)) 
print(not (a != b))

#AND OPERATOR
val1 = True
val2 = False
print("AND OP:",val1 and val2 )
print("AND OP:", (a == b) and (a > b))

#OR OPERATOR
print("OR OP:", val1 or val2)
print("OR OP:", (a == b) or (a > b))


# Identity Operator
a = 10
b = 20
c = a
print(a is not b)
print(a is c)

#Type Convrsion
a = 2
b = 4.25

sum = a + b
print(sum)
#we cannot add or subtract "str" with "float" 

#Casting Conversion
a = float("2") 
b = 4.5

sum = a + b
print(type(a))
print(sum)

#Input in Python
# it is always a str value

name = input("enter your name :")
print(type(name))
print("Welcome" , name)