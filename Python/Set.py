#initialize empty set
set1 = set()
set1 = set("GeekForGeeks")
print("\nSet with the use of String: ", set1)

set2 = set(["Geeks", "For", "Geeks"])
#Duplicate values will be removed
print("\nSet with the use of List: ", set2)

#loop through set
for i in set2:
    print(i, end=" ")
    #print elements one by one

# Check if element is present in set
print("\nGeeks" in set2)

#iniitiate empty dictionary
d = {}
d = {'Name': 'Geeks', 'Age': 20, 'Course': 'CS'}
print("\nDictionary: ", d)

#create dictionary with dict() constructor
d1 = dict({1: 'Geeks', 2: 'For', 3: 'Geeks'})
print("\nDictionary with the use of dict(): ", d1)

d = {1: 'Geeks', 'Name': 'For', 3: 'Geeks'}

#accessing element using key
print(d['Name'])

#adding elements using get
print(d.get('Age'))