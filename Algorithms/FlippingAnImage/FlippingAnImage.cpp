class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> output;
        int row = A.size();
        int col = A[0].size();
        
        for (int i = 0; i < row; i++) {
            output.push_back(vector<int>());
            for (int j = col - 1; j >= 0; j--) {
                if (A[i][j])
                    output[i].push_back(0);
                else
                    output[i].push_back(1);
            }
        }
        
        return output;
    }
};