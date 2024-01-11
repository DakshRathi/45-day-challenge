class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<int,int> count;
        int ans = 0;

        for(int i = 0 ; i<nums.size() ; i++) count[nums[i]]++;
        for(auto i:count)
        {
            if(k==0)
            {
                if(i.second>1) ans++;
            }
            else if(count.find(i.first + k) != count.end()) ans++;
        }

        return ans;
    }
};