#include <iostream>

using namespace std;

int main() {
    int n;
    int num[100];

    n = 20;
    num[0] = 20;
    num[1] = 15;
    num[2] = num[0] + num[1];

    printf("sum = %d\n", num[2]);

//    int p;
//    int p;

    if(n == 2) {
        int p = 3;
    }
    else {
        int p = 4;
    }

//    printf("%d\n", p);

    for(int i=0; i<10; i++) {
        int p = 4;
        printf("%p\n", &p);
    }

//    scanf("%d", &num[0]);
//
//    cout << num[0] << endl;

    for(int i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }

    for(int i=0; i<5; i++) {
        cout << num[i] << endl;
    }

    scanf("%d", &n);

//    int num[n]; ///never

    for(int i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }
}

