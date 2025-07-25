class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int count = 0;
        int size = nums.size();
        
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) {
                bool leftEmpty = (i == 0 || nums[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || nums[i + 1] == 0);
                
                if (leftEmpty && rightEmpty) {
                    nums[i] = 1; // assign, not compare
                    count++;
                    if (count >= n) return true;
                }
            }
        }
        return count >= n;
    }
};
