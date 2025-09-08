#include<iostream>

using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int *p;
    p = new int[m*n];
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            cout<<"Enter elements: ";
            cin>>*(p + i * n + j);
        }
    }
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            cout<<*(p + i *n + j)<<" ";
        }
        cout<<"\n";
    }
}
