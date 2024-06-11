#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n>99 && n<=999)
    {
        if(((n/10)%10)%3==0)
        cout<<"Trendy Number";
        else cout<<"Not a Trendy Number";
    }
    else cout<<"Invalid Number";
        
return 0;
}
