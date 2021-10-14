
#---------thats the question----------
"""
You have a friend who give tuition for 3 subjects. ask him/ her how many student you have? based on this number prepare a list and store student id, name, and subject. now check how many maths student, phy student and ict student. find out the monthly income. Math student payment 1000, ICT student payment 700, phy student payment 800. 
OUTPUT
----------
how many student do you have?    5
Student Number 1: 
    Student Name: 
    Subject: 1. physics
            2. Math 
            3. ICT
Student Number 2: 
    Student Name: 
    Subject: 1. physics
            2. Math 
            3. ICT
Student Number 3: 
    Student Name: 
    Subject: 1. physics
            2. Math 
            3. ICT
Student Number 4: 
    Student Name: 
    Subject: 1. physics
            2. Math 
            3. ICT
Student Number 5: 
    Student Name: 
    Subject: 1. physics
            2. Math 
            3. ICT
show the list
[ID, Name , Subject]
Number of Math student:
Number of Physics student: 
Number of ICT student: 
Monthly income:
"""

# import math
# value=16
# # print(math.sqrt(value))
# new=16**0.5
# print(new)

#-------my code starts from here---
"""
math,phy,ict,income=0,0,0,0

list1=[]
list2=[]
list3=[]
studentNum=int(input("How many students you have? "))
for i in range(studentNum):
    temp=(input("Please enter the "+str(i+1)+" no student name :"))
    list1.append(temp)
    temp=(input("Enter The ID: "))
    list2.append(temp)
    print("Press 1 for Math\nPress 2 for Physics\nPress 3 for ICT ")
    temp=int(input())
    if(temp==1):
        math=math+1
        list3.append('Math')
    elif(temp==2):
        phy=phy+1
        list3.append('Physics')
    else:
        ict=ict+1
        list3.append('ICT')

income=(1000*math)+(700*phy)+(800*ict)
list=list1+list2+list3

print("\n\nStudent name,id,subject list: ",list,"\n")
print("ID->\tName->\tSubject")
for i in range(studentNum):
    print(list2[i]+"-"+list1[i]+"-"+list3[i])
print("\nNumber of Math Student: ",math)
print("Number of Physics Student: ",phy)
print("Number of ICT Student: ",ict)

print("\nTotal Monthly income ",income)

"""

#-----partho bhai code----------#
student_number = int(input("How Many student you have? "))
student_info = []
for x in range(student_number):
    student_info.append(x+1)
    name = input("Student Name:   ")
    student_info.append(name)
    subject = int(input("Select your Subject: \n 1. Physics \n 2. Math \n 3. ICT \n "))
    if(subject == 1):
        subject = "Physics"
    elif(subject == 2):
        subject = "Math"
    elif(subject == 3):
        subject = "ICT"
    student_info.append(subject)
print(student_info)
mathStudent = 0 
phyStudent = 0 
ictStudent = 0 
length = len(student_info)
for x in range(length):
    if "ICT" == student_info[x]:
        ictStudent += 1
    elif "Physics" == student_info[x]:
        phyStudent += 1
    elif "Math" == student_info[x]:
        mathStudent += 1
print(mathStudent) 
print(phyStudent) 
print(ictStudent)

total_income = mathStudent * 1000 + phyStudent * 800 + ictStudent * 700 
print(total_income)




