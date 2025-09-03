class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> h;
        int sq =0;
        for(int i =0;i<nums.size();i++){
            sq = nums[i]*nums[i];
            h.push_back(sq);
        }
        sort(h.begin(),h.end());
        return h;
    }
};