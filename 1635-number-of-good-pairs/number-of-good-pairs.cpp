class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n =nums.size();
        int count = 0;
        unordered_map<int, int> umap;  
        for(int i = 0; i<n;i++){
            if (umap.find(nums[i]) != umap.end()) {
             count += umap[nums[i]];
             }
                umap[nums[i]]++;
              

        }
        return count;
    }
};