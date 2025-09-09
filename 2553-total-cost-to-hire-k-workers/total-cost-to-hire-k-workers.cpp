class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans =0;
        int hired =0;
 priority_queue<int, vector<int>, greater<int>> pq1;
priority_queue<int, vector<int>, greater<int>> pq2;
    int i =0;
    int j =costs.size()-1;
    while(hired<k){
        while(pq1.size()<candidates && i<=j){
          pq1.push(costs[i]);
          i++;
        }
        while(pq2.size()<candidates && j>=i){
            pq2.push(costs[j]);
          j--;
        }
         int left = pq1.empty() ? INT_MAX : pq1.top();
            int right = pq2.empty() ? INT_MAX : pq2.top();

            if (left <= right) {
                ans += left;
                pq1.pop();
            } else {
                ans += right;
                pq2.pop();
            }

            hired++;

    }
   return ans;
    }
};