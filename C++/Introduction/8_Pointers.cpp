#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void operation(int*,int*);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a>>b;
    operation(&a,&b);   
    return 0;
}
void operation(int* a,int* b)
{
    cout<<*(a)+*(b)<<endl<<abs(*(a)-*(b));
}
