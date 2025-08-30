class Solution {
public:
    int minOperations(vector<int>& nums) {
      map<int,int> freq;   // ordered map
        for (int t : nums) {
            freq[t]++;       // count frequency
        }

        int ans = 0;
        for (auto &p : freq) {
            int f = p.second;

            if (f == 1) return -1;   // only one task → impossible

            if (f % 3 == 0) ans += f / 3;     // full groups of 3
            else ans += f / 3 + 1;            // need one extra group of 2
        }
        return ans;   
    }
};