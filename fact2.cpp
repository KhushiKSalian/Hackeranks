#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int number)
{
    int fact=1;
    for(int i=1;i<=number;i++)
        fact*=i;
    return fact;
}
int main() {
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
