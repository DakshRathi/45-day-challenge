class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        ans.push_back(tmp);
        
        for(int i: nums){
            int n = ans.size();
            for(int j = 0; j < n; ++j){
                tmp = ans[j];
                tmp.push_back(i);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};