#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,ans=0;
    cin>>n;
    if(n<0)  n*=-1;
    ans= n%10 + n/1000;
    cout<<ans;
    return 0;
}
