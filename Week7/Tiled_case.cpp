#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    for(char &c : str){
        if(c >= 'A' && c <= 'Z'){
            c += 32;
        }
        else if(c >= 'a' && c <= 'z'){
            c -= 32;
        }
    }
    cout<<str;
}
