#include<iostream>
#include<string>

using namespace std;

int main(){
    string str,str2;
    cout<<"Enter Name : ";
    getline(cin,str);
    int l = 0 ; 
    int r = str.length() - 1;
    str2 = str;
    while(l < r){
        char t;
        t = str[l];
        str[l] = str[r];
        str[r] = t;
        l++;
        r--;
    }
    if(str == str2){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
