class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;  // changed from vector<int> to vector<vector<int>>

        for(int i = 0; i < n; i++) {
            vector<int> row(i + 1, 1);  // initialize row with 1s

            for(int j = 1; j < i; j++) {
                row[j] = v[i - 1][j - 1] + v[i - 1][j];  // Pascal's rule
            }

            v.push_back(row);
        }

        return v;
    }
};
