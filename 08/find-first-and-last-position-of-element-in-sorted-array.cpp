class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> output;
        output.push_back(-1);
        output.push_back(-1);

        int l = 0, r = nums.size() - 1, mid = 0;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (nums[mid] == target)
            {
                int rt = mid, lt = mid;

                while (lt >= 0 && nums[lt] == target) output[0] = lt--;
                while (rt <= r && nums[rt] == target) output[1] = rt++;
                return output;
            } 
            else
            {
                if (nums[mid] < target) l = mid + 1;
                else r = mid - 1;
            }
        }

        return output;
    }
};