#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int f[26] = {0};
    int i,count = 0;
    for(i = 0 ; str[i] != '\0' ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        if(str[i] >= 'a' && str[i] <= 'z'){
        int index = str[i] - 'a';
        f[index]++;
    }
}
    for(i = 0 ; i < 26 ; i++){
        if (f[i] % 2 != 0){
            count++;
        }
    }
    int res = count = 0 ? 0 : count - 1;
    cout<<"No. of characters needed to be removed: "<<res;
}
