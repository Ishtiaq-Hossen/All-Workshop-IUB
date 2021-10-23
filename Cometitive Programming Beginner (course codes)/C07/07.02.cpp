#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char temp[11000];
    string str;
//    cin >> str;
//    cout << str << endl;

    scanf("%s", &temp);
    str = temp;

    cout << str.size() << endl;

//    int A[123] = {1, 3, 4};
//    int B[123] = {6, 7, 8};
//
//    A = B; /// won't work
}

int main1() {
    char str[100] = {'a', 'b', 'c'};
    char s[110] = "bangladesh";

    /**
        null character ending
        str[100] = "abc\0'
        s[110] = "bangladesh\0"

    */

//    ara[0], ara[1]

    str[0], str[1];

    scanf("%s", &str);

    int len = 0;
    for(int i=0; str[i] != 0; i++) {
        /**
            if(str[i] != 0)
            if(str[i])
        */
//        if(str[i] != '\0') {
//            len++;
//        }
//        else {
//            break;
//        }
        len++;
    }

    printf("[%s] size: %d\n", str, len);

//    cout << strlen(str) << endl;
}
