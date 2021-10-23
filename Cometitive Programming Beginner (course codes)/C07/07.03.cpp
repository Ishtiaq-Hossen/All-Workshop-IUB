#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int n = 10, score[30] = {};
    for(int i=0; i<n; i++) {
//        scanf("%d", &score[i]);
        score[i] = rand() % 20;
    }
    for(int i=0; i<n; i++) {
        printf("%d ", score[i]);
    }
    cout << endl;

    /// insert 35(val) at position 3(pos)

    int pos = 3, val = 35;
    for(int i=n-1; i>=pos; i--) {
        score[i+1] = score[i];
    }
    score[pos] = val;
    n++;

    for(int i=0; i<n; i++) {
        printf("%d ", score[i]);
    }
    cout << endl;
}
