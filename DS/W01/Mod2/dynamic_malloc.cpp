#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int* x= new int;         // dynamically memory allocate from heap
    // *x = 100;

    // cout<<x<<"\n";
    // cout<<*x<<"\n";
    // delete x;
    
    int n;
    cin>>n;
    
    int* x= new int [n];        // dynamically memory allocate from heap
    for(int i=0; i<n; i++)  
        cin>>x[i];

    for(int i=0; i<n; i++)
        cout<<x[i]<<"\n";
    


    delete[] x;
    return 0;
}