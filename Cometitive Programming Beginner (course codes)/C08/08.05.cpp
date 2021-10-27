#include <iostream>
#include <cstring>

using namespace std;

int str_len(char S[]) {
    int len = 0;
    for(int i=0; S[i] != 0; i++) {
        len++;
    }
    return len;
}

void str_cpy(char des[], char src[]) {
    int len = str_len(src);
    for(int i=0; i<=len; i++) {
        des[i] = src[i];
    }
    return;
}

void str_cat(char A[], char B[]) {

}

///reverse
void str_rev(char A[]) {

}

int str_cmp(char A[], char B[]) {

}

bool is_pal(char A[]) {

}

int min_mov_pal(char A[]) {

}

bool is_ana(char A[], char B[]) {

}

int main() {
    char A[110] = "bangladesh", B[110];
//    scanf("%s", A);

    str_cpy(B, A);

    printf("[%s] [%s]\n", A, B);
}
