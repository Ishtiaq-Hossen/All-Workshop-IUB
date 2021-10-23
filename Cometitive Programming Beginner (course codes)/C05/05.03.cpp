#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    bool prime = true;

    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            prime = false;
        }
    }
    if(prime == true) {
        cout << "prime" << endl;
    }
    else {
        cout << "not prime" << endl;
    }
}

