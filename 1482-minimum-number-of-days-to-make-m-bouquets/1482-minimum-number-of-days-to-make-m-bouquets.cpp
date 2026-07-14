class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int flowers = 0;
        int bouquets = 0;

        for (int bloom : bloomDay) {
            if (bloom <= day) {
                flowers++;

                if (flowers == k) {
                    bouquets++;
                    flowers = 0; // Flowers used, start counting again
                }
            } else {
                flowers = 0; // Adjacency broken
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = 1LL * m * k;

        if (need > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, mid, m, k)) {
                high = mid;      // Try to find a smaller valid day
            } else {
                low = mid + 1;   // Need more days
            }
        }

        return low;
    }
};