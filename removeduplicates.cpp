#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=-999 && arr[i]==arr[j])
                arr[j]=-999;
        }
        if(arr[i]!=-999) cout<<arr[i]<<endl;
    }
    return 0;
}