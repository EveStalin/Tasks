
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sen, del;
    cout << "Please enter a sentence: ";
    getline(cin, sen);
    cout << "What do you want to delete? ";
    getline(cin, del);
    size_t pos = sen.find(del);
    if (pos != string::npos) {
        sen.erase(pos, del.size());
    }
    cout << "Edited Sentence: "<<sen<< endl;
    return 0;
}
