#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

/// 1 2 9

int main() {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a+b > c && b+c > a && c+a > b) {

        if(a == b && b == c) {
            printf("shomobahu\n");
        }
    //    else if( (a == b && b != c) || (a != b && b == c) ) {
        else if( a == b || b == c ) {
            printf("shomodibahu\n");
        }
        else {
            printf("bishomobahu\n");
        }


    }

    else {
        printf("not a triangle\n");
    }
}

