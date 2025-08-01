class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas =0;
        int totalcost = 0;
        for(int i =0; i<gas.size();i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        if(totalgas<totalcost){
            return -1;

        }
        int current =0;
        int start =0;
        for(int i =0;i<gas.size();i++){
            current +=gas[i]-cost[i]; 
        
        if(current <0){
            start =i+1;
            current =0;

        }
        }
        return start;
    }
};