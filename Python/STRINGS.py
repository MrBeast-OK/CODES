#Strings

str1 = "This is a string.\nWe are doing it on python."
print(str1)

#check data type
print(type(str1))

#Empty List
a=[]
print(type(a))

#list wit int values
b=[1,2,3,4,5]
print(b)
print(type(b))

#list with mixed values
c=[1,2.5,"hello",True]
print(c)
print(type(c))

#concatination
str1 = "hello"
str2 = "world"
final_str = str1+str2
print(final_str)

#Slicing
str = "Krishna Bansal"
ch = (str[3:10])
print(ch)
print(len(str))

a = (str[:])
print(a)
b = (str[0:len(str)])
print(b)
c = (str[-14:-1])
print(c)

#FUNCTIONS IN STRING
str= "This is a string"
print(str.endswith("ng"))
print(str.replace("i","n"))
print(str.find("a"))
print(str.count("i"))
print(str.index("a"))
print(str.join("Its"))
print(str.upper())
print(str.lower())
print(str.capitalize())
print(str.title())
print(str.split("i"))
print(str.strip())
print(str.isalnum())
print(str.isalpha())
print(str.islower())
print(str.isupper())
print(str.isspace())
print(str.startswith("Th"))
print(str.swapcase())
print(str.partition("a"))
print(str.rpartition("i"))
print(str.zfill(50))
print(str.center(100))
print(str.encode())
print(str.expandtabs())
print(str.format())
print(str.format_map({'a':1,'b':2}))