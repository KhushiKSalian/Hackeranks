#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<set>
#include <algorithm>
using namespace std;


int main() {
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        count+=1;
    }
    cout<<"There are "<<count<<" distinct element in the array.";
    return 0;
}