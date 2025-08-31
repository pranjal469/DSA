class Solution {
public:
    int partitionString(string s) {
        vector<int>last(26,-1);
        int count =0;
        int start=0;
        for(int i =0;i<s.length();i++){
            if(last[s[i]-'a']>=start){
                count++;
                start=i;
            }
            last[s[i]-'a']=i;
        }
        return count+1;
    }
};