class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> umap;
        int n = bills.size();

        for (int i = 0; i < n; i++) {
            if (bills[0] != 5) {
                return false; // First customer must pay with $5
            }

            if (bills[i] == 5) {
                umap[5]++;
            } 
            else if (bills[i] == 10) {
                if (umap[5] >= 1) {
                    umap[5]--;
                    umap[10]++;
                } else {
                    return false; // Can't give $5 change
                }
            } 
            else if (bills[i] == 20) {
                if (umap[10] >= 1 && umap[5] >= 1) {
                    umap[10]--;
                    umap[5]--;
                } 
                else if (umap[5] >= 3) {
                    umap[5] -= 3;
                } 
                else {
                    return false; // Can't give $15 change
                }
            }
        }

        return true; // Successfully gave change to all
    }
};
