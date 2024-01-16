class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        // Cyclic Sort
        for(int i = 0 ; i < nums.size() ; i++)
        {
            while(nums[i] < nums.size() && nums[i] > 0 && nums[i] != nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
        }

        // Finding least first missing positive number
        for(int i = 0 ; i < nums.size() ; i++) if(nums[i] != i+1) return i+1;

        return nums.size()+1;
    }
};