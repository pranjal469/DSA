class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> time(n);
        
        // Har monster ka city tak aane ka time calculate
        for(int i = 0; i < n; i++) {
            time[i] = ceil((double)dist[i] / speed[i]);
        }
        
        // Sab monsters ke time ko sort karna
        sort(time.begin(), time.end());
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            // Agar monster city me aa gaya ya simultaneously aa raha hai
            if(time[i] <= i) {
                return count;
            }
            count++;
        }
        
        return count;
    }
};
