#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n; i++) {
            if(arr[i] == 0 && i+1 < n) {
                for(int j=n-1; j>i; j--)
                    arr[j] = arr[j-1];
                
                arr[++i] = 0;
            }
        }
    }
};