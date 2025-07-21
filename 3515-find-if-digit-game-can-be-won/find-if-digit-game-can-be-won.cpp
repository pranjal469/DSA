class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singlesum=0;
        int multiplesum=0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]<=9){
                singlesum+=nums[i];
            }else{
             multiplesum+=nums[i];
            }
        }
        if(singlesum == multiplesum){
            return false;
        }else{
            return true;
        }
    }
};