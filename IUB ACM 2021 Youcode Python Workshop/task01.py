"""

-------thats the question----
Take 15 IUB ID from your friend and sum those numbers which are divisible by 5 and 7.
Find the average and check that number is int or float.
Taking number, int to string conver, float to string, string to int or float,
int to float  or float to int , if elif else condition, and operation , or operation, % operation,
summmation, substraction

"""

sum=0
count=0
print("Enter your 15 friends ID: \n")
friend1=int(input())
if(friend1%5==0 and friend1%7==0):
    sum=sum+friend1
    count=count+1
friend2=int(input())
if(friend2%5==0 and friend2%7==0):
    sum=sum+friend2
    count=count+1
friend3=int(input())
if(friend3%5==0 and friend3%7==0):
    sum=sum+friend3
    count=count+1
friend4=int(input())
if(friend4%5==0 and friend4%7==0):
    sum=sum+friend4
    count=count+1
friend5=int(input())
if(friend5%5==0 and friend5%7==0):
    sum=sum+friend5
    count=count+1
friend6=int(input())
if(friend6%5==0 and friend6%7==0):
    sum=sum+friend6
    count=count+1
friend7=int(input())
if(friend7%5==0 and friend7%7==0):
    sum=sum+friend7
    count=count+1
friend8=int(input())
if(friend8%5==0 and friend8%7==0):
    sum=sum+friend8
    count=count+1
friend9=int(input())
if(friend9%5==0 and friend9%7==0):
    sum=sum+friend9
    count=count+1
friend10=int(input())
if(friend10%5==0 and friend10%7==0):
    sum=sum+friend10
    count=count+1
friend11=int(input())
if(friend11%5==0 and friend11%7==0):
    sum=sum+friend11
    count=count+1
friend12=int(input())
if(friend12%5==0 and friend12%7==0):
    sum=sum+friend12
    count=count+1
friend13=int(input())
if(friend13%5==0 and friend13%7==0):
    sum=sum+friend13
    count=count+1
friend14=int(input())
if(friend14%5==0 and friend14%7==0):
    sum=sum+friend14
    count=count+1
friend15=int(input())
if(friend15%5==0 and friend15%7==0):
    sum=sum+friend15
    count=count+1

print(count," Matched and the sum is: ",sum)
avg=sum/count
print("Average is: ",avg)
print(type(avg))
    
    
    
    