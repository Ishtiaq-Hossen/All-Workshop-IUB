#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char s[1230];

    scanf("%s", s);
    string A = s;

    scanf("%s", s);
    string B = s;

    int cnt1[300] = {0}, cnt2[300] = {0};
///    int cnt1[30] = {0}, cnt2[30] = {0};

    for(int i=0; i<A.size(); i++) {
        cnt1[ A[i] ]++; /// cnt1[ A[i]-'a' ]++;
    }
    for(int i=0; i<B.size(); i++) {
        cnt2[ B[i] ]++; /// cnt2[ B[i]-'a' ]++;
    }

    bool ana = true;
//    for(char i='a'; i<='z'; i++) {
    for(char i=0; i<300; i++) {
        if(cnt1[i] != cnt2[i]) {
            ana = false;
            break;
        }
    }

}

/// move to palindrome
int main3() {
    char s[1230];
    scanf("%s", s);

    string A = s;

    int mov = 0;

    for(int i=0, j=A.size()-1; i<j; i++, j--) {
        if(A[i] != A[j]) {
            mov++;
        }
    }

    cout << mov << endl;
}

/// palindrome check
int main2() {
    char s[1230];
    scanf("%s", s);

    string A = s;

    bool pal = true;

    for(int i=0, j=A.size()-1; i<j; i++, j--) {
        if(A[i] != A[j]) {
            pal = false;
            break;
        }
    }

    if(pal) {

    }
}

///reverse
int main1() {
    char A[1230];
    scanf("%s", A);

    int len = strlen(A);

    for(int i=0, j=len-1; i<j; i++, j--) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    printf("%s\n", A);
}

