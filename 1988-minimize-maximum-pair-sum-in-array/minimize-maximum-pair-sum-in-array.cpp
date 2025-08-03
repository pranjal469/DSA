class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(begin(nums),end(nums));
       int i = 0;
       int  j= nums.size()-1;
       int max_sum =0;
       while(i<j){
        int sum = nums[i]+nums[j];
        if(max_sum<sum){
            max_sum=sum;
         }
         i++;
         j--;
      }
        return max_sum; 
    }

};