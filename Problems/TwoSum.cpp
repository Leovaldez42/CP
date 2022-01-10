#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        This is for two pointer methord
        vector<int> result;
        for(auto it1 = nums.begin(); it1 != nums.end(); ++it1 ) {
            
            auto it2 = find(it1 + 1, nums.end(), target-*it1);
            if(it2 != nums.end()) {
                // found the number
                result.push_back(it1 - nums.begin());
                result.push_back(it2 - nums.begin());
                break;
            }
        }
        return result;
        */
        
        // Hashmap methord
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++) {
            int num = nums[i];
            int complement = target - num;
            auto it = hash.find(complement);
            if(it != hash.end()) {
                // we found
                return {it->second, i};
            }
            hash[num] = i;
        }
        return {};
    }
};