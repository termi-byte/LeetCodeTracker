class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        int maxCount=0;

        sort(nums.begin(),nums.end());

        if(nums.size()==0) return 0; 
        if(nums.size()==1) return 1;

        for(int i =0;i<nums.size()-1;i++){
            int j = i+1;
            if(nums[j] - nums[i]==1){
                count ++;
            }
            if(nums[j]==nums[i]) continue;
            if(nums[j] - nums[i]!=1) count=0;
            maxCount=max(count,maxCount);
        }
        return maxCount+1;
    }
};