#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l,b,area=0;
    cin>>l>>b;
    area=l*b;
    cout<<"The required length is "<<2*(l+b)<<" m"<<endl;
    cout<<"The required area of carpet is "<<area<<" sqm";
    return 0;
}
