class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto row : matrix) if(find(row.begin(),row.end(),target) != row.end()) return true;

        return false;
    }
};