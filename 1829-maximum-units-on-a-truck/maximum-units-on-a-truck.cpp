class Solution {
public:
static bool compare(vector<int>&a,vector<int>&b){
return a[1]>b[1];

}
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),compare);
        for(int i = 0; i < boxTypes.size();i++){
            int boxtypes= boxTypes[i][0];
            int boxunits = boxTypes[i][1];
            if(boxtypes<truckSize){
                ans += boxtypes*boxunits;
                truckSize -= boxtypes;
            }else{
                ans  +=truckSize*boxunits;
                break; 
            }
        }
        return ans;
    }
};