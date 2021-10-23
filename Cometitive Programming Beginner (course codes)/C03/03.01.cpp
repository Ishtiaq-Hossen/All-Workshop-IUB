#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int x = 3, y = 4;

    int z = x*y;

    x = x + 1;
    x++;

    x--;

//    int age;
//
//    printf("Please enter your age: ");
//    scanf("%d", &age);
//
//    printf("Saving %d as your age\n", age);

    int dd, mm, yy;
    printf("Input Birthday(d m y):\n");
    scanf("%d %d %d", &dd, &mm, &yy);
    printf("%d-%d-%d\n", dd, mm, yy);
//
//    cin >>dd >> mm >> yy;

}
