class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s ;
        for(int i =0;i<word1.size();i++){
            s+=word1[i];
        }
        string s1;
         for(int i =0;i<word2.size();i++){
            s1+=word2[i];
        }
        if(s==s1){
            return true;
        }
        return false;
    }
};