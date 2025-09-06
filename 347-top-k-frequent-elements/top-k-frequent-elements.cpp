class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequencies
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        // Step 2: Use a max-heap (frequency, number)
        priority_queue<pair<int,int>> maxHeap;

        for (auto &p : freq) {
            maxHeap.push({p.second, p.first});  
            // (frequency, number)
        }

        // Step 3: Extract top K
        vector<int> result;
        while (k-- && !maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};
