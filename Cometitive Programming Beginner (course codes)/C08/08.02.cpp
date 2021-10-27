#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char A[1230], B[1230];
    scanf("%s %s", A, B);

    ///strcat(A, B);

    int alen = strlen(A);
    int blen = strlen(B);

    for(int i=alen, j=0; j<=blen; i++, j++) {
        A[i] = B[j];
    }
//    A[alen+blen] = 0;

    string a, b;

    a = A;
    b = B;

    a.size();

    if(a < b) {

    }

    a = a + b;

}
