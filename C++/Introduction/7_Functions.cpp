#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

auto maximum(int,int,int,int)-> void;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    maximum(a,b,c,d);
    return 0;
}
void maximum(int a,int b,int c,int d)
{
    int arr[]={a,b,c,d};
    cout<<*max_element(arr, arr + 4);
}
