#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,even=0,odd=0;
    cin>>n;
    int i=0,num=0;
    while(i<n)
    {
        cin>>num;
        if(num%2==0)
            even+=num;
        else if(num%2!=0)
            odd+=num;
        i++;
    }
    cout<<"The sum of the even numbers in the array is "<<even<<endl;
    cout<<"The sum of the odd numbers in the array is "<<odd<<endl;
    return 0;
}
