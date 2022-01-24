#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
		int curr = 0;
		int ans = 0;

		for(int i=0; i<nums.size(); i++) {
			if(nums[i] == 0)
				curr = 0;
			else {
				curr += 1;
				ans = max(curr, ans);
			}
		}
		return ans;
    }
};