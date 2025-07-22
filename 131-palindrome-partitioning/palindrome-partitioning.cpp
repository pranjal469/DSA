class Solution {
public:
bool ispalin(string part){
    string s2=part;
    reverse(s2.begin(),s2.end());
    return part==s2;
}
void solve (string s, vector<vector<string>>&result,vector<string> &ans){
    if(s.size()==0){
        result.push_back(ans);
        return;
    }
    for(int i = 0;i<s.size();i++){
        string part = s.substr(0,i+1);
        if(ispalin(part)){
            ans.push_back(part);
            solve(s.substr(i+1),result,ans);
            ans.pop_back();
        }
    }

}
    vector<vector<string>> partition(string s) {
     vector<vector<string>>result;
     vector<string> ans;
     solve(s,result,ans);  
     return result;
    }
};