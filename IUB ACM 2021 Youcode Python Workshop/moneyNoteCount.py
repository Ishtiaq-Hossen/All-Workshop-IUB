# you have some money and now find out how many 1000 taka notes, 100 taka notes and 10 taka notes

number = int(input("Enter your amount:  "))
count1000 = 0
count100 = 0
count10 = 0

if(number >= 1000):
    count1000 = int(number/1000)
    number = number % 1000
if(number >= 100): 
    count100 = int(number/100)
    number = number % 100
if(number>= 10):
    count10 = int(number/10)

print(count1000, count100, count10)