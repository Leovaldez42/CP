// Given three distinct integers A, B and C, print the second largest number among them.
#include<iostream>
using namespace std;

int main () {
    int a, b, c = 0;
    cin >> a >> b >> c;
    if(a > b && a < c || a > c && a < b)  cout << a;
    else if(b > a && b < c || b < a && b > c)   cout << b;
    else    cout << c;
}