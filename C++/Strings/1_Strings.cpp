#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str1;
    string str2;
    cin>>str1>>str2;
    cout<<str1.length()<<" "<<str2.length()<<endl;
    cout<<str1+str2<<endl;
    cout<<str2[0]+str1.substr(1)<<" "<<str1[0]+str2.substr(1);
    return 0;
}
