#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a>>b;
    for (int n=a; n<=b; n++) 
    {
        
        if (n == 1)         cout<<"one"<<endl;
        else if (n == 2)    cout<<"two"<<endl;
        else if (n == 3)    cout<<"three"<<endl;
        else if (n == 4)    cout<<"four"<<endl;
        else if (n == 5)    cout<<"five"<<endl;
        else if (n == 6)    cout<<"six"<<endl;
        else if (n == 7)    cout<<"seven"<<endl;
        else if (n == 8)    cout<<"eight"<<endl;
        else if (n == 9)    cout<<"nine"<<endl;
        else if (n > 9)     
            {
                if (n%2==0) cout<<"even"<<endl;
                else cout<<"odd"<<endl;
            }
    }

    return 0;
}
