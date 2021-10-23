
"""
-------show us---

*****
****
***
**
*


"""

row = int(input("Enter the row number:    "))

for r in range(row,0,-1):
    for c in range(r):
        print("*",end="")
    print("\n")
