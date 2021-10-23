#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    int D = b*b - 4*a*c;

    double x1 = (double)(-b + sqrt(D)) / (2*a);
    double x2 = (double)(-b - sqrt(D)) / (2*a);

    printf("%0.2f %0.2f\n", x1, x2);

    printf("%05d %05d\n", 123, 45);
    printf("%05d %05d\n", 123, 45);


}
