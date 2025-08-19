#include<iostream>

using namespace std;
//Array is a group of represented values of the same data type
int main(){
    int a[5]={10,20,30,40,50},x = 15;

    //"%d" - decimal value
    //"%i" - integer
    //"%o" - octa
    //"%x" - hexa-decimal
    //"%p" hexa with preceding (0x)
    /*
        Dec -- Oct -- Hexa-decimal
         0  --  0  -- 0
         to     to    to    is same
         7  --  7  -- 7
         8  -- 1 0 -- 8
         9  -- 1 1 -- 9
         10 -- 1 2 -- A
         11 -- 1 3 -- B
         12 -- 1 4 -- C
         13 -- 1 5 -- D
         14 -- 1 6 -- E
         15 -- 1 7 -- F

    */
   cout<<0[a]<<"\n";// prints 10
   cout<<a[1]<<"\n";//prints 20
   cout<<a+2<<"\n";// prints address
   printf("%d : %o : %x : %X : %d",x,x,x,x,&x);// Prints decimal value, Octa, Hexa decimal, Address of X
}
