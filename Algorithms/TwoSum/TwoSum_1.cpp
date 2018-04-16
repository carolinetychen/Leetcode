// *************************************************
// Leetcode Solution
// Author: Caroline Chen
// *************************************************
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].
// *************************************************

// Map
// Time Complexity: O(nlogn)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        map<int, int> hashmap;
        map<int, int>::iterator iter;
        for (int i = 0 ; i < nums.size(); i++)
            hashmap[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            iter = hashmap.find(complement);
            if (iter != hashmap.end() && iter->second != i) {
                output.push_back(i);
                output.push_back(iter->second);
                return output;
            }
        }
    }
};