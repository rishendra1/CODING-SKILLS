#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u');
}
int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (!isVowel(str[i])) {
            i++;
        } 
        else if (!isVowel(str[j])) {
            j--;
        } 
        else {
            swap(str[i], str[j]);
            i++;
            j--;
        }
    }
    cout<<"String after swapping vowels: "<<str;
    return 0;
}
