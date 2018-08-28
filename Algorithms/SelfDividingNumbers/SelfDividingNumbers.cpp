class Solution {
public:
    bool isDivide(int num) {
        int num_tmp = num;
        while(num_tmp) {
            if (!(num_tmp % 10) || (num % (num_tmp % 10))) {
                return false;
            }
            num_tmp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (isDivide(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};