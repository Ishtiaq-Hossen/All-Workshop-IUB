#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    int D = b*b - 4*a*c;

    /**
    if D is less than 0:
        printf("Complex root\n");
    else :
        double x1 = (double)(-b + sqrt(D)) / (2*a);
        double x2 = (double)(-b - sqrt(D)) / (2*a);
        printf("%0.2f %0.2f\n", x1, x2);
    */

    if(a == 0) {
        printf("Root: %0.2f\n", -1.0*c/b);
    }
    else if(D < 0) {
        printf("Complex root\n");
    }
    else if(D == 0) {
        printf("Roots are equal: %0.2f\n", -b/(2*a));
    }
    else {
        double x1 = (double)(-b + sqrt(D)) / (2*a);
        double x2 = (double)(-b - sqrt(D)) / (2*a);
        printf("%0.2f %0.2f\n", x1, x2);
    }

    int n = 1;
    if(n == 1) {
        printf("first block\n");
    }
    else if(n == 1) {
        printf("second block\n");
    }
//    else {
//
//    }


    if(a <= 20) {

    }

    else if(b >= 23) {

    }
    else if(c != 100) {

    }
}

