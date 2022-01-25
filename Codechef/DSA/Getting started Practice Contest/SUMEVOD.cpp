#include<iostream>
using namespace std;

int main () {
    long long n;  cin >> n;
    long long odd = 0;
    long long even = 0;
    for(int i=1; i<=2*n; i+=2)
        odd += i;
    for(int i=2; i<=2*n; i+=2)
        even += i;
    cout << odd << " " << even;
}