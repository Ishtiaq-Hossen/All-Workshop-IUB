#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char A[1230], B[1230];
    scanf("%s %s", A, B);

    bool same = true;

    int alen = strlen(A);
    int blen = strlen(B);
    if(alen != blen) {
        same = false;
    }

    for(int i=0; i<alen && same; i++) {
        if(A[i] != B[i]) {
            same = false;
            break;
        }
    }

    /**
    strcmp(A,B) =
        0   if A == B
        -1  if A < B
        +1  if A > B
    */
    strcmp(A, B);

}
