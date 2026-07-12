class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it=find(nums.begin(),nums.end(),target);
        if (it == nums.end())
            return {-1, -1};

        int start = it - nums.begin();
        int end = start;

        while (end + 1 < nums.size() && nums[end + 1] == target)
            end++;

        return {start, end};
    }
};