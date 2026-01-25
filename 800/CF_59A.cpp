#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int capital = 0, small = 0;

    for (char c : s) {
        if (isupper(c)) capital++;
        else small++;
    }

    if (capital > small) {
        // convert entire string to uppercase
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        // convert entire string to lowercase
        for (char &c : s) {
            c = tolower(c);
        }
    }

    cout << s;
    return 0;
}
