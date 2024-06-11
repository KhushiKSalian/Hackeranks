#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,sum=0;
    cin>>n;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    cout<<sum;
    return 0;
}
