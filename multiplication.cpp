#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,first=0,second=1,next=0;
    cin>>n;
    for(int i=0;i<n-2;i++)
    {
        next=first+second;
        first=second;
        second=next;
    }
    cout<<next;
    return 0;
}
