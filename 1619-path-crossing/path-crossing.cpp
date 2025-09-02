class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<pair<int,int>> visited;

        visited.insert({0,0}); // starting point visited

        for (char c : path) {
            if (c == 'N') y++;
            else if (c == 'S') y--;
            else if (c == 'E') x++;
            else if (c == 'W') x--;

            // Agar ye position pehle visit ho chuki hai
            if (visited.count({x,y})) {
                return true; 
            }
            visited.insert({x,y});
        }
        return false; // kabhi cross nahi hua
    }
};
