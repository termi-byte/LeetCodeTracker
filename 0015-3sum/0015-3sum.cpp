class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        int n= A.size();
        vector<vector<int>> result;
        sort(A.begin(),A.end());
        for(int i=0;i<n;i++){
            if(i>0 && A[i]==A[i-1]) continue;
            int right=n-1;
            int left=i+1;
            while(left<right){
                int sum=A[i]+A[left]+A[right];
                if(sum==0){
                    result.push_back({A[i],A[left],A[right]}); 

                    while(left<right && A[left]==A[left+1]) left++;
                    while(left<right && A[right]==A[right-1]) right--;

                    left++;
                    right--;
                }
                else if(sum>0)
                {
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return result;
        
    }
};