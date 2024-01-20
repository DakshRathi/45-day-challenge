class Solution {
    vector<int> currComb;
    int currSum;

    void combination(vector<int>& candidates, int target, int currIndex, vector<vector<int>>& answer)
    {
        if(currSum > target) return;
        if(currSum == target)
        {
            answer.push_back(currComb);
            return;
        }
        
        for(int i=currIndex; i<candidates.size(); i++)
        {
            currComb.push_back(candidates[i]);
            currSum += candidates[i];
            combination(candidates, target, i, answer);
            currComb.pop_back();
            currSum -= candidates[i];
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        // cin.tie(nullptr);
        // cout.tie(nullptr);
        // ios_base::sync_with_stdio(false);

        vector<vector<int>> answer;
        combination(candidates, target, 0, answer);
        return answer;
    }
};