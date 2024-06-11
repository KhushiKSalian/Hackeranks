#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char c;
    cin>>c;
    if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
        cout<<"Vowel";
    else if(!isalpha(c))
        cout<<"Not an alphabet";
    else cout<<"Consonant";
    return 0;
}
