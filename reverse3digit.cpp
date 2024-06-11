#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int num;
    cin>>num;
    string temp= to_string(num);
    swap(temp[0],temp[2]);
    cout<<stoi(temp);
    return 0;
}
