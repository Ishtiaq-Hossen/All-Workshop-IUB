#include <iostream>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int g = 1;
    for(int i=2; i<=a; i++) {
        if(a%i==0 && b%i==0) {
            g = i;
        }
    }

    cout << g << endl;
}

