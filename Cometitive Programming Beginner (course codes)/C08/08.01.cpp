#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char A[1230], B[1230];
    scanf("%s %s", A, B);

    int alen = strlen(A);
    int blen = strlen(B);

    int val = 0;

    for(int i=0; i<=alen; i++) {
        if(A[i] < B[i]) {
            val = -1;
            break;
        }
        else if(A[i] > B[i]) {
            val = +1;
            break;
        }
    }

    cout << val << endl;

    /**
    strcmp(A,B) =
        0   if A == B
        -1  if A < B
        +1  if A > B
    */
    strcmp(A, B);

}
