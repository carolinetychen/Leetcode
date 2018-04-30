// *************************************************
// Leetcode Solution
// Author: Caroline Chen
// *************************************************
// Given a binary array, find the maximum number of consecutive 1s in this array.
//
// Input: [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s.
//              The maximum number of consecutive 1s is 3.

// Note:
// The input array will only contain 0 and 1.
// The length of input array is a positive integer and will not exceed 10,000
// *************************************************

// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int tmp = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // If nums[i] == 1, check if consecutive sum is larger than max
            if (nums[i] == 1) {
                if (++tmp > max)
                    max = tmp;
            } else {
                tmp = 0;
            }
        }
        return max;
    }
};