#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}
