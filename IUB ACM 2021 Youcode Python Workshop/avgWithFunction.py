avg = 0.0
def avgfunction(sum, numberofStudent):
    global avg
    avg = sum / numberofStudent
def main():
    sum = 0
    numberofStudent = 5
    for n in range(numberofStudent):
        v = int(input("Enter a value: "))
        sum += v
    avgfunction(sum,numberofStudent)
    print(avg)

main() #this is for indicating from which function the pogram should start