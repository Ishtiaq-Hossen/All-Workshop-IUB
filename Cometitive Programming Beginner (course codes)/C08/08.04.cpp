#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int add(int a, int b) {
    a++; b++;
    return a+b;
}

int sum(int n, int ara[]) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans += ara[i];
        ara[i]++;
    }
    return ans;
}

int str_len(char S[]) {
    int len = 0;
    for(int i=0; S[i] != 0; i++) {
        len++;
    }
    return len;
}

int main() {
    int a = 10, b = 5;

    printf("%d\n", add(a,b));

    cout << a << ' ' << b << endl;

    int tmp[10] = {1,2,3,4,5};
    cout << sum(5, tmp) << endl;
    for(int i=0; i<5; i++) {
        cout << tmp[i] << " ";
    } cout << endl;


    char str[100] = {'a', 'b', 'c'};

    scanf("%s", &str);

    printf("[%s] size: %d\n", str, str_len(str));

//    strlen(str);
//    strcpy(A, B);

}
