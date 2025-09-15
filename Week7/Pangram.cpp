#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isPangram(const string &str) {
    bool seen[26] = {false};
    int count = 0;
    for (char c : str) {
        if (isalpha(c)) {
            c = tolower(c);
            int index = c - 'a';
            if (!seen[index]) {
                seen[index] = true;
                count++;
            }
        }
    }
    return (count == 26);
}
int main() {
    string str;
    cout << "Enter a phrase to check : ";
    getline(cin, str);
    if (isPangram(str)) {
        cout<<"The string is a Pangram.\n";
    } else {
        cout<<"The string is not a Pangram.\n";
    }
    return 0;
}
