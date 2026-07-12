class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        vector<int> C(m+n);
        int idx=0;
        for(int i=0;i<m;i++){
            C[idx++]=A[i];
        }
        for(int i=0;i<n;i++){
            C[idx++]=B[i];
        }
        sort(C.begin(),C.end());
        A=C;
    }
};