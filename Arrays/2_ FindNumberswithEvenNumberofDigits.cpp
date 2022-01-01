#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    int countDigits(int num) {
        int count = 0;
        while(num != 0) {
            num /= 10;
            count += 1;
        }
        
        return count;
    }
    
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++) {
            if(countDigits(nums[i])%2 == 0)
                ans += 1;
        }
        return ans;
    }
};