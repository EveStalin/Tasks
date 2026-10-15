#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    int i;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    i = s1.compare(s2);
    if (i == 0) {
        cout << "Strings are equal";
    } else {
        cout << "Strings are not equal";
    }
    return 0;
}
