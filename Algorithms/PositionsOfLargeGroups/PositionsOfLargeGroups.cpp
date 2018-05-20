class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> output;
        int left = 0;
        int right = 1;
        
        while (right < S.length()) {
            if (S[right] == S[left]) {
                right++;
            }
            else {
                if ((right - left) >= 3) 
                    output.push_back({left, right - 1});
                left = right++;
            }
        }
        if ((right - left) >= 3) 
            output.push_back({left, right - 1});
        return output;
    }
};