#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char A[110], B[110];
    scanf("%s %s", A, B);

    int res = 0;
    int len = strlen(A);
    for(int i=0; i<=len; i++) {
        if(A[i] < B[i]) {
            res = -1;
            break;
        }
        else if(A[i] > B[i]) {
            res = +1;
            break;
        }
    }

    cout << res << endl;
}

