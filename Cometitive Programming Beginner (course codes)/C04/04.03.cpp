#include <iostream>

using namespace std;

/**
initialization, condition, change
*/

int main() {
    double weight = 5;

//    step 1: good morning
//    step 2: go to step 1

//    if (condition) {
//        ///work
//    }
//
//    while (condition) {
//        /// work
//    }

    int num = 1;

    while (num <= 100) {
        printf("%d ", num);
        num++;
    }
    cout << endl;

    int a,b;
    scanf("%d %d", &a, &b);

    num = a;
    while (num <= b) {
        if(num%2==0) {
            printf("%d is even\n", num);
        }
        else {
            printf("%d is odd\n", num);
        }

        num++;
    }
    cout << endl;
}
