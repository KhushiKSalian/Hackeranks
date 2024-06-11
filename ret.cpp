#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int month,rent, days;
    cin>>month;
    cin>>rent;
    cin>>days;
    if(month>=1 && month<=12)
    {
        if((month>=4 && month<=6) || (month>=11 && month<=12))
        cout<<(rent + rent*0.2 )* days; 
        else cout<<rent * days;   
    }
    else cout<<"Invalid Input";
    return 0;
}
