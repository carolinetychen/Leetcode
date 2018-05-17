class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row = A.size();
        int left, right;
        
        for (int i = 0; i < row; i++) {
            left = 0;
            right = A[0].size() - 1;
            while (left < right) {
                if (A[i][left] == A[i][right]) {
                    A[i][left] = (A[i][left]) ? 0:1;
                    A[i][right] = (A[i][right]) ? 0:1;
                }
                left++;
                right--;
            }
            if (left == right) {
                A[i][left] = (A[i][left]) ? 0:1;
            }
        }
        
        return A;
    }
};