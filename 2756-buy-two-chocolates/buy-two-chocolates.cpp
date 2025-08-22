class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int left =money;
      sort(prices.begin(), prices.end());

        if(prices[0]+prices[1]<=left){
            left=left -(prices[0]+prices[1]);
        } 
        return left;
     }
};