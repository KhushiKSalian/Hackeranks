#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    bool odd=false, even=false;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]%2==0) even=true;
            else odd=true;
            if(odd==true && even== true)
            {
                cout<<"No";
                return 0;
            }
        }
    cout<<"Yes";
    return 0;
}
