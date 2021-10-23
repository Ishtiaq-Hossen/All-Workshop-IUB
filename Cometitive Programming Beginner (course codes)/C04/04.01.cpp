#include <iostream>

using namespace std;

int main() {

    int p = 10, q = 3;

    cout << p/q << endl;
    cout << p%q << endl;

    char t = '\n';

    printf("%c\n", t);

    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        cout << "Numeric" << endl;
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "Alphabetic" << endl;

        if(ch >= 'A' && ch <= 'Z') {
            cout << "Capital" << endl;
        }
        else {
            cout << "Small" << endl;
        }

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "Vowel" << endl;
        }
        else {
            cout << "Consonent" << endl;
        }
    }
    else {
        cout << "nothing" << endl;
    }

}
