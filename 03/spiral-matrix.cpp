class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int left = 0, top = 0;
        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                output.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                output.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    output.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    output.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return output;
    }
};