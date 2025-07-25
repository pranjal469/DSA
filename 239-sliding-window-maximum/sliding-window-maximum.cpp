class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int ,int>>pq;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
            }
        vector<int> ans ;
        ans.push_back(pq.top().first);
        int left= 0;
        int right = k;
        while(right < nums.size()){
            pq.push({nums[right],right});
            left++;
            while(!pq.empty()&&pq.top().second<left){
                pq.pop();

            }
            ans.push_back(pq.top().first);
            right++;
        }
        
        return ans;
    }
};