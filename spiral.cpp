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
        {
            cin>>arr[i][j];
        }
    }
    int row_start=0, row_end=n-1,col_end=n-1,col_start=0;

    while(col_start<=col_end && row_start<=row_end)
    {
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        for(int col=col_end;col>=col_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }

    return 0;
}
