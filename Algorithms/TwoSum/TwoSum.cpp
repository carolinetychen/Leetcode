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

// Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for(int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // Loop through the vector to see if the sum of the two equals the target
                if (nums[i] + nums[j] == target){
                    output.push_back(nums[i]);
                    output.push_back(nums[j]);
                    return output;
                }
            }
        }
    }
};