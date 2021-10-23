#include <iostream>

using namespace std;

/**
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
.
.
5 x 10 = 50
*/

int main() {
    int N;
    scanf("%d", &N);

//    int i = 1;
//    while(i <= 10) {
//        printf("%d x %d = %d\n", n, i, n*i);
//        i++;
//    }

    int n = 1;
    while (n <= N) {
        /// n er ghorer namta

        int i = 1;
        while(i <= 10) {
            printf("%d x %d = %d\n", n, i, n*i);
            i++;
        }
        printf("\n");

        n++;
    }

    /**
    for(int n = 1; n <= N; n++) {
        for(int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n*i);
        }
        printf("\n");
    }

    */
}
