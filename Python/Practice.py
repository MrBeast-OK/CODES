#Ques.

marks = float(input("Enter student marks :",))
if(marks >= 90):
    Grade = "A"
elif(90 > marks and marks >= 80):
    Grade = "B"
elif(80 > marks and marks > 70):
    Grade = "C"
elif(marks <= 70):
    Grade = "D"
else:
    Grade = "E"    
print("Grade of the student :" ,Grade)

#Ques.

Number = int(input("Enter a number :",))
if(Number%2 == 0):
    Num = "Even"
elif(Number%2 == 1):
    Num = "Odd"
print("Number is :",Num)

#Ques.

Num