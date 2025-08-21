class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // Find the two smallest prices
        int firstMin = INT_MAX, secondMin = INT_MAX;
        
        for (int price : prices) {
            if (price < firstMin) {
                secondMin = firstMin;
                firstMin = price;
            } else if (price < secondMin) {
                secondMin = price;
            }
        }
        
        int total = firstMin + secondMin;
        
        if (total <= money) {
            return money - total;
        }
        
        return money;
    }
};
