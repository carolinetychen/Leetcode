// *************************************************
// Leetcode Solution
// Author: Caroline Chen
// *************************************************
// In MATLAB, there is a very useful function called 'reshape',
// which can reshape a matrix into a new one with different size
// but keep its original data.
//
// You're given a matrix represented by a two-dimensional array,
// and two positive integers r and c representing the row number
// and column number of the wanted reshaped matrix, respectively.
//
// The reshaped matrix need to be filled with all the elements of
// the original matrix in the same row-traversing order as they were.
// If the 'reshape' operation with given parameters is possible and
// legal, output the new reshaped matrix; 
// Otherwise, output the original matrix.
//
// Example 1:
// Input: 
// nums = 
// [[1,2],
//  [3,4]]
// r = 1, c = 4
// Output: [[1,2,3,4]]
// Example 2:
// Input: 
// nums = 
// [[1,2],
//  [3,4]]
// r = 2, c = 4;
// Output:
// [[1,2],
//  [3,4]]
// *************************************************

// Brute Force
// Time Complexity: O(r * c)
// Space Complexity: O(r * c)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> output;
        int row = nums.size();
        int col = nums[0].size();
        int r_tmp = 0;
        int c_tmp = 0;
        if (row * col != r * c)
            return nums;
        
        output.push_back(vector<int>());
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                output[r_tmp].push_back(nums[i][j]);
                c_tmp ++;
                if (c_tmp == c && r_tmp != r - 1) {
                    output.push_back(vector<int>());
                    r_tmp ++;
                    c_tmp = 0;
                }
            }
        }
        return output;
    }
};