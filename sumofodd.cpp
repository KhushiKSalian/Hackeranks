#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            sum+=i;
    }
    cout<<sum;
    return 0;
}
