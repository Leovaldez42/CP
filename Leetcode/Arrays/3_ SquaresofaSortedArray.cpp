#include<iostream>
#include<vector>
using namespace std;

// Time complexity : O(n)
// Space complexity: O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int start=0, end=n-1, c;
        while(start <= end) {
            if(abs(nums[start]) < abs(nums[end])) {
                c = nums[end] * nums[end];
                end--;
            } else {
                c = nums[start] * nums[start];
                start++;
            }
            ans.push_back(c);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Time complexity : O(n log n)
// Space complexity: O(1)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
            nums[i] = nums[i] * nums[i];
        sort(nums.begin(), nums.end());
        
        return(nums);
    }
};
