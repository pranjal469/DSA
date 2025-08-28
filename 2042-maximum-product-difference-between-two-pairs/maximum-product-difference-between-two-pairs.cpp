class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int i =0;
        int j = nums.size()-1;
     sort(nums.begin(),nums.end());
     int max = (nums[j]*nums[j-1]) - (nums[i]*nums[i+1]);
     return max;
    }
};