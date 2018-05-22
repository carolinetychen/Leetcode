class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int output = -1;
        int count = nums.size();
        int left = 0;
        int right = 1;
        sort(nums.begin(), nums.end());
        
        while (right < count) {
            if (nums[right] == nums[left]) {
                right++;
            }
            else {
                if ((right - left) > (count / 2)) {
                    output = nums[left];
                    break;
                } 
                else {
                    left = right++;
                }
            }
        }
        if (right == count)
            output = nums[right - 1];
        return output;
    }
};