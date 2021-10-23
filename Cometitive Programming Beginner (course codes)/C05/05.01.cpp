#include <iostream>

using namespace std;

int main() {

    int n = 13;

    for(int i = 1; i <= 10; i++) {
        if (n*i > 100) break;

        printf("%d x %d = %d\n", n, i, n*i);
    }
    printf("\n");

    for(int i = 1; i <= 10; i++) {
        cout << "starting step " << i << endl;

        if (i%2 == 0) {
            continue;
        }

        printf("%d x %d = %d\n", n, i, n*i);
        printf("DKLSF KJS DFKDSdfs df d\n");
        cout << "DKFJDK" << endl;
    }
    printf("\n");
}
