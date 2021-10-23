#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll fact[20] = {1, 1};
    for(int i=2; i<=18; i++) {
        fact[i] = i * fact[i-1];
    }

    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++) {

        ll f = 1;
        int n;
        scanf("%d", &n);

        cout << fact[n] << endl;

    }
}

int main1() {
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++) {

        ll f = 1;
        int n;
        scanf("%d", &n);
        for(int i=1; i<=n; i++) {
            f *= i;
        }

        cout << f << endl;

    }
}

