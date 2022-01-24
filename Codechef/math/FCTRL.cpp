#include<iostream>
using namespace std;

int solve(int n) {
    int ans = 0;
    for(int i=5; i<=n; i=i*5) {
        ans += n/i;
    }
    return ans;
}

int main () {
    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        cout << solve(n) << endl;
    }
}