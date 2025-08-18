//Coding Skills 18 - 08 - 2025
#include<iostream>
using namespace std;

int main(){
    int x = 9;
    
    // (x == 7, 6) → This uses the comma operator
    // First part: (x == 7) → false (because x = 9)
    // Then only the last value (6) is taken
    // So the condition becomes: if (6)
    // In C++, any non-zero number means TRUE
    // That is why it goes inside if
    
    if (x == 7, 6){
        cout<<"Apples";   // This runs
    }
    else{
        cout<<"Oranges";
    }
    //Output is "Apples"
    return 0;
}
/*
x = 5,6,7; --> The comma has seperated the values at the leftmost assigned, it means - x = 5
x = (5,6,7)l --> In the bracket, the value at the rightmost are assigned, it means - x = 7
1. n^2 hours -
    -> n x n x 3600 seconds
2. n^3 sec -
    -> n x n x n seconds
3. Trivial Input - It means of small input  sizes for example in the above case - [1 -> 3600], even slow 
algorithm may work.
4. Actual Input - It is a type of input that means of large inputs like - [3600 -> infinite]
5. For large inputs, the difference between n^2 and n^3 algorithms becomes huge
6. That's why we should design algorithms for realistic large inputs,not just trivial cases.
*/
