"""
-----show this ----
10101010101
101010101
1010101
10101
101
1


"""

row = int(input("Enter the row number:    "))

for r in range(row,0,-1):
    for c in range(r*2-1):
        temp = c+1
        temp = temp % 2
        print(temp,end='') #here end="" is used for skipping endl
    print()