#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}
