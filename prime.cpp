#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        cout<<i<<" ";
    }
    return 0;
}
