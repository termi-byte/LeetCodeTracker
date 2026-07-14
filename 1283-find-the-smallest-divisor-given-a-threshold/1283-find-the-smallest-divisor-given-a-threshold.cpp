class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int low=1;
        int high=*max_element(nums.begin(),nums.end());

        while(low < high){
            int mid=low+((high-low)/2);

            int div=0;
            for(int i:nums){
                div+=ceil(double(i)/mid);
            }

            if(div<=threshold) high = mid;
            else low = mid+1;

        }
        return low;
    }
};