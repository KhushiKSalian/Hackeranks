#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int num)
{
    int y=1;
   while(num>0)
   {
       y*=num;
       num--;
   }
    return y;
}
int main() {
    int n,sum=0;
    cin>>n;
    int temp=n;
    while(n)
    {
        sum+=fact(n%10);
        n/=10;
    }
    if(sum==temp) cout<<"Yes";
    else cout<<"No";
    return 0;
}
