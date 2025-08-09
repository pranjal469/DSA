class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());  
        if(n==0)return "";
        string a = strs[0];
        string b = strs[n-1];
        string result = "";
        for(int i =0;i<a.size()&& i < b.size();i++){
            if(a[i]==b[i])result+=a[i];
            else break;
        }
        return result;
    }
};