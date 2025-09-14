#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> seen;
        int n = nums.size();
        int i;

        // Traverse from end to start, find the longest suffix with distinct elements
        for (i = n - 1; i >= 0; --i) {
            if (seen.count(nums[i])) {
                // nums[i] is a duplicate in the suffix; stop here
                break;
            }
            seen.insert(nums[i]);
        }

        // If i < 0, entire array is distinct already
        if (i < 0) return 0;

        // We need to remove elements from [0..i] inclusive, that's (i+1) elements
        int toRemove = i + 1;

        // Each operation removes up to 3 from the start
        // Minimum operations = ceil( toRemove / 3 )
        int ops = (toRemove + 2) / 3;  // integer ceiling trick

        return ops;
    }
};
