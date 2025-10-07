#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd_of_four(int a, int b, int c, int d) {
    int result = gcd(a, b);
    result = gcd(result, c);
    result = gcd(result, d);
    return result;
}
int main() {
    int a, b, c, d;
    cout<<"Enter four numbers: ";
    cin>>a>>b>>c>>d;
    int result = gcd_of_four(a, b, c, d);
    cout<<"GCD of the four numbers is: "<<result<<endl;
    return 0;
}
