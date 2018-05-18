class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> output;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                if (nums[(nums[i] * -1) - 1] > 0) {
                    nums[(nums[i] * -1) - 1] *= -1;
                }
            }
            else if (nums[nums[i] - 1] > 0) {
                nums[nums[i] - 1] *= -1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) 
                output.push_back(i + 1);
        }
        return output;
    }
};