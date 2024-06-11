#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isSpecial(int num)
{   int sum=0,pro=1;
    int temp=num;
    while(num)
    {
        sum+=num%10;
        pro*=num%10;
        num/=10;
    }
    if(pro+sum==temp)
        return true;
    return false;
}
int main() {
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        if(i>=10 && i<=99)
        {
            if(isSpecial(i))
            cout<<i<<endl;
        }
    }
    return 0;
}
