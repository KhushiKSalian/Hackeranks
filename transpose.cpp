#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
         cout<<endl;
    }
    cout<<"Transpose matrix is:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[j][i]<<" ";
         cout<<endl;
    }
    return 0;
}
