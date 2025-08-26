class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> h;

        for(int i =0;i<paths.size();i++){
          h[paths[i][0]]++;
        }
        for(int i =0;i<paths.size();i++){
             string dest = paths[i][1];
            if (h.find(dest) == h.end()) {
                return dest;
        }}
        return "";
    }
};