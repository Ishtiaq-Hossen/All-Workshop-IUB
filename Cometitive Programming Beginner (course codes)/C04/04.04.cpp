#include <iostream>

using namespace std;

int main() {

    int a,b;
    scanf("%d %d", &a, &b);

    int num = a;
    while (num <= b) {
        if(num%2==1) {
            printf("%d ", num);
        }
        num++;
    }
    cout << endl;

    num = a;
    while (num <= b) {
        if(num%3==0) {
            printf("%d ", num);
        }
        num++;
    }
    cout << endl;
}

