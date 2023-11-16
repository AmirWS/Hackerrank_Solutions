#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k;
    cin>>n>>q;

    int** a=new int* [n];
    for (int i=0; i<n; i++) 
    {
        cin>>k;
        a[i] = new int[k];
        
        for (int j = 0; j < k; j++) 
        {
            cin>>a[i][j];
        }
        
    
        
    }

    int i,j;
    int* queries = new int[q];

    for(int idx=0; idx<q; idx++)
    {
        cin>>i>>j;
        queries[idx]=a[i][j];
        
    }
    
    for(int idx=0; idx<q; idx++)
    {
        cout<<queries[idx]<<endl;

    }
    delete[] a;
    delete[] queries;
    return 0;
}
