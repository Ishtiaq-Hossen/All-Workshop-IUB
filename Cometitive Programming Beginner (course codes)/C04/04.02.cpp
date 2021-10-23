#include <iostream>

using namespace std;

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        cout << "Numeric" << endl;
        int v = ch - '0';
        if(v%2 == 0) {
            cout << "Even" << endl;
        }
        else {
            cout << "Odd" << endl;
        }
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "Alphabetic" << endl;

        if(ch >= 'A' && ch <= 'Z') {
            cout << "Capital" << endl;

            ch = ch - 'A' + 'a';
        }
        else {
            cout << "Small" << endl;
        }

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
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

