class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int tmp = 0;
        
        for (int i = 0; i < nums.size(); i++) {
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