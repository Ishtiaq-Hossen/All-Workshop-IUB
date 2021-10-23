#include <iostream>

using namespace std;

int main() {
    int n = 4, num[1010] = {2,5,3,2,0,1};
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += num[i];
    }

    cout << sum << endl;
}
