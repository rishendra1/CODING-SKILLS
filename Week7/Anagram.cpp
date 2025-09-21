#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int Anagram(string s1, string s2){
    if(s1.size() != s2.size()){
        return 0;
    }
    else{
        for (char &c : s1) {
        c = tolower(c);
    }
        for (char &c : s2) {
        c = tolower(c);
    }
        sort(s1.begin(),s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }
}

int main(){
    string str1,str2;
    cout<<"Enter string 1: ";
    getline(cin,str1);
    cout<<"Enter string 2: ";
    getline(cin,str2);
    if(Anagram(str1, str2)){
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }
}
