#number is prime or not 

number = 5
isPrime = 0
value = bool(isPrime)
print(value)

for v in range(2,number):
    if(number % v == 0):
        isPrime = True
        break

if(isPrime):
    print("Number is Prime...")
else:
    print("Number is not Prime..")
    