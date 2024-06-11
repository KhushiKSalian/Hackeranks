#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>  //standard lib
using namespace std;


int main() {
    float p, r, years,a;
    cin>>p;
    cin>>r;
    cin>>years;
    a=(p*r*years)/100;
    cout<<fixed<<setprecision(2)<<a<<endl; //to get precision 2
    cout<<p+a<<endl;
    cout<<0.02*a<<endl;
    cout<<(p+a)-(0.02*a); //(p+a)-(0.02*a)
    return 0;
}
