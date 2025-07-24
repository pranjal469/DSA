class Solution {
public:void solve(vector<vector<int>>&result,vector<int>&nums, int idx){
  if(idx == nums.size()){
    result.push_back(nums);
    return;
  } 
  
for(int i=idx;i<nums.size();i++){
    swap(nums[i],nums[idx]);
    
    solve(result,nums,idx+1);
    swap(nums[i],nums[idx]);
    

    }


}
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>result;
         
         int idx = 0;
         solve(result,nums,idx);
         return result;
    }
};