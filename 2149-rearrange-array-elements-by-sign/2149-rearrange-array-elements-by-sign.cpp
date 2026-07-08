class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> nums2;
        vector<int> nums3;
        vector<int> nums4;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                nums2.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums3.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            nums4.push_back(nums2[i]);
            nums4.push_back(nums3[i]);
        }
        return nums4;
    }
};