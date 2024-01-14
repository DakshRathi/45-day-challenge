class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int row = 0, col = matrix[0].size() - 1;

        while (row < matrix.size() && col >= 0)
        {
            if (matrix[row][col] == target) 
            {
                matrix.clear();
                return true;
            }
            else if (matrix[row][col] < target) row++;
            else col--;
        }

        matrix.clear();
        return false;
    }
};