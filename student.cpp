#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;
double truncateToTwoDecimals(double num) {
    return static_cast<double>(static_cast<int>(num * 100)) / 100;
}
int main() {
    string name;
    int age;
    float gpa;
    char grade;
    cin>>name;
    cin>>age;
    cin>>gpa;
    cin>>grade;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"CGPA: "<<truncateToTwoDecimals(gpa)<<endl;
    cout<<"Grade: "<<grade<<endl;
    return 0;
}
