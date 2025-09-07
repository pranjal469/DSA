class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> num(n);
        int start =1;
        int i =0;
        while(i+1<n){
            num[i]= start;
            num[i+1]= -start;
            i+=2;
            start++;
        }
        return num;

    }
};