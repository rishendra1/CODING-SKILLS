#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter size: ";
    cin>>n;
    int *a = (int *)malloc(n * sizeof(int));
    for(int i = 0 ; i < n; i++){
        cout<<"Enter elements: ";
        cin>>*(a + i);
    }
    for(i = 0 ; i < n ; i++){
        cout<<*(a + i)<<" ";
    }
    cout<<"\n";
    int m;
    cout<<"Enter new size: ";
    cin>>m;
    a = (int *)realloc(a,m * sizeof(int));
    if (m > n){
        for(j = n ; j < m ; j++){
            cout<<"Enter elements: ";
            cin>>*(a + j);
        }
    }
    for(i = 0 ; i < 5 ; i++){
        cout<<*(a + i)<<" ";
    }
    cout<<"\n";
}
