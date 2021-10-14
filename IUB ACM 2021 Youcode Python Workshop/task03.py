"""
#task03
Suppose you are a faculty member. 
you have some students. now take all the students information (Student ID, Student Name) and store it.
Also take students' 2 quiz marks(50), midterm marks(100), final marks(100) if they are not present then store "ABSENT" on that position.  
Now find out every student's total marks. 
Marks distribution will be 15%(quiz 1) + 15% (quiz 2) + 30%(Mid) + 40%(Final). 
Now find out their grade(followed by IUB). 
If any student misses their mid or final then the grade will be " I ". 
If they miss the quiz then give them ZERO.
print('YOU'RE REQUESTED TO COMPLETE THIS TASK!')

"""

num=int(input("How many students you have "))
# print(num)
studentId=[]
studentName=[]
studentGrade=[]
for i in range(num):
    temp=input(str(i+1)+" no students name: ")
    studentName.append(temp)
    temp=input(str(i+1)+" no students ID: ")
    studentId.append(temp)
    quiz1=(input("Enter quiz1 marks out of 50: "))
    quiz2=(input("Enter quiz2 marks out of 50: "))
    mid=(input("Enter mid marks out of 100: "))
    final=(input("Enter final marks out of 100: "))
    if(mid=='ABSENT' or final=='ABSENT'):
        studentGrade.append('I')
    elif(quiz1=='ABSENT' or quiz2=='ABSENT'):
        studentGrade.append(0)
        print("YOU'RE REQUESTED TO COMPLETE THIS TASK!\n")
    else:
        sum=((int(quiz1)/50)*15)+((int(quiz2)/50)*15)+((int(mid)/100)*30)+((int(final)/100)*40)
        if(sum<50):
            studentGrade.append('F')
        elif(sum>=50 and sum<60):
            studentGrade.append('D')
        elif(sum>=60 and sum<65):
            studentGrade.append('D+')
        elif(sum>=65 and sum<70):
            studentGrade.append('C')
        elif(sum>=70 and sum<75):
            studentGrade.append('C+')
        elif(sum>=75 and sum<80):
            studentGrade.append('B')
        elif(sum>=80 and sum<85):
            studentGrade.append('B+')
        elif(sum>=85 and sum<90):
            studentGrade.append('A')
        elif(sum>=90 and sum<=100):
            studentGrade.append('A+')

for i in range(num):
    print(str(i+1)," no Student ID,Name & Grade: ",studentId[i],"-->",studentName[i],"-->",studentGrade[i],"\n")



"""
print("All Students name serially: ",studentName,"\n")
print("All Students ID serially: ",studentId,"\n")
print("All Students grade serially: ",studentGrade)
"""
