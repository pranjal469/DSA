class Solution {
public:
    long long maximumHappinessSum(vector<int>& v, int k) {
        sort(v.begin(), v.end(), greater<int>()); 
         long long num =0;
        for(int i =0;i<v.size();i++){
            if(k==0){
                return num;
            }
            if((v[i]-i)<=0){
           num+=0;
            }else{
                num+=v[i]-i;
            }
            
            k--;
        }
        return num;
    }
};