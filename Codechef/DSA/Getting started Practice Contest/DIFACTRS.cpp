// You are given a number N and find all the distinct factors of N

#include<iostream>
#include<climits>
using namespace std;

int main () {
    int n;  cin >> n;
    int counter = 0;
    int arr[n];
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            arr[counter] = i;
            counter += 1;
        }
    }
    cout << counter << endl;
    for(int i=0; i<counter; i++) {
        cout << arr[i] << " ";
    }
}