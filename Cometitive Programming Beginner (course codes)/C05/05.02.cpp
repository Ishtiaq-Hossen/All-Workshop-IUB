#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum += i;
//        sum = sum + i;
    }

    cout << sum << endl;

    sum = 0;
///    for(int i=1; i<=n; i+=2) {
    for(int i=1; i<=n; i++) {
        if(i%2==0) {
            sum += i;
        }
    }
    cout << sum << endl;
}
