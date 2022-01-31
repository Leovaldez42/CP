#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int> &nums, int target) {
            unordered_map<int, int> _map;
            for(int i=0; i<nums.size(); i++) {
                int num = nums[i];
                int complement = target - nums[i];
                auto it = _map.find(complement);
                if(it == 1) {
                    return {it->second, it>first};
                }
                _map[num] = i;
            }
            return;
	    }
    };
