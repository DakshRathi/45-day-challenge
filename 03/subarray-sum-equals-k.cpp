class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int output = 0;
        
        int prefix[nums.size()];
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }

        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (prefix[i] == k)
                output++;
            if (m.contains(prefix[i] - k))
                output += m[prefix[i] - k];
            m[prefix[i]]++;
        }

        return output;
    }
};