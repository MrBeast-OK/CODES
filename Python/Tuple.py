# initiate empty tuple
tup1 = ()
tup2 = ('Geeks', 'for', 'Geeks')
print("\nTuple with the use of String: ", tup2)
tup1 = (50, 100, 150, 200, 250)

print(tup1[0])
print(tup1[1:4])
print(tup1[2:])
print(tup1 * 2)
print(tup1 + tup2)

# Truthy and Falsy valuses
if (2, 3):
    print("Non-empty is True")
else:
    print("Non-empty is False")
