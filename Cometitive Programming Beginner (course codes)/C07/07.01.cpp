#include <iostream>
#include <ctime>
//#include <bits/stdc++.h>

using namespace std;

int main() {
    srand(time(NULL));
    int n = 20, score[30] = {};
    for(int i=0; i<n; i++) {
//        scanf("%d", &score[i]);
        score[i] = rand() % 5 + 1;
    }
    for(int i=0; i<n; i++) {
        printf("%d ", score[i]);
    }
    cout << endl;

    int cnt[6] = {0};
    for(int i=0; i<n; i++) {
//        if(score[i] == 1) cnt[1]++;
//        else if(score[i] == 2) cnt[2]++;
//        else if(score[i] == 3) cnt[3]++;
//        else if(score[i] == 4) cnt[4]++;
//        else if(score[i] == 5) cnt[5]++;

        cnt[ score[i] ]++;
    }
}

int main3() {
    srand(time(NULL));
    int n = 20, score[30] = {};
    for(int i=0; i<n; i++) {
//        scanf("%d", &score[i]);
        score[i] = rand() % 5 + 1;
    }
    for(int i=0; i<n; i++) {
        printf("%d ", score[i]);
    }
    cout << endl;

    for(int i=1; i<=5; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++) {
            if(score[j] == i) {
                cnt++;
            }
        }
        printf("score: %d, cnt: %d\n", i, cnt);
    }
}

int main2() {
    srand(time(NULL));
    int n = 20, score[30] = {};
    for(int i=0; i<n; i++) {
//        scanf("%d", &score[i]);
        score[i] = rand() % 20;
    }
    for(int i=0; i<n; i++) {
        printf("%d ", score[i]);
    }
    cout << endl;

//    //not smart
//    int mx = score[0];
//    for(int i=1; i<n; i++) {
//        if(score[i] > mx) {
//            mx = score[i];
//        }
//    }

    int mx = -1, mxi = -1;
    for(int i=0; i<n; i++) {
        if(score[i] > mx) {
            mx = score[i];
            mxi = i;
        }
    }

    printf("max value: %d, id: %d\n", mx, mxi);
}

int main1() {
    int A = 10, B = 5;
    int temp = A;
    A = B;
    B = temp;
}
