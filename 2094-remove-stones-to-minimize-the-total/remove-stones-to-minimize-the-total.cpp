class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum = 0;
        priority_queue<int> pq;

        // Push all elements into max heap and calculate total sum
        for (int pile : piles) {
            pq.push(pile);
            sum += pile;
        }

        // Perform k operations
        for (int i = 0; i < k; i++) {
            int maxel = pq.top();
            pq.pop();
            int remove = maxel / 2;
            sum -= remove;
            pq.push(maxel - remove); // ✅ Push the reduced value
        }

        return sum;
    }
};
