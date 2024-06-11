#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n1,n2=0;
    
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    cin>>arr1[i];
    
    cin>>n2;
    if(n1!=n2) {
        cout<<"Incompatible";
        return 0;
    }
    
    int arr2[n2];
    for(int i=0;i<n2;i++)
    cin>>arr2[i];
    
    for(int i=0;i<n1;i++)
    {
        if(arr1[i]<arr2[i])
        {
            cout<<"Incompatible";
            return 0;
        }
    }
    cout<<"Compatible";
    return 0;
}
