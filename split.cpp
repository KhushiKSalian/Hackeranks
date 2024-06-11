#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    cout<<"The number of friends in each team is "<<(a/b)<<" and left out is "<<(a%b);
    return 0;
}
