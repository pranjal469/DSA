class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int no= additionalRocks;
        vector<int>v;
        int n = capacity.size();


        for(int i =0;i<n;i++){
           v.push_back(capacity[i]-rocks[i]);

        }
        int count =0;
        sort(v.begin(),v.end());
        for(int i =0;i<v.size();i++){
            if(v[i]==0){
                count++;
            }
            else if(v[i]<=no){
                no-=v[i];
                count ++;
            }
           
        }
        return count;
    }
};