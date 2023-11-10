#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
// #include <algorithm>

#include <array>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    
    
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 1;i<=N;i++)
    {
        cout<<arr[N-i]<<" ";
    }
    return 0;
}
