class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++){
            int num=i;
        bool issd=true;
            while(num >0){
                int digit = num%10;
                if(digit==0||i%digit!=0){
                    issd= false;
                }
                num/=10;
            }
            if(issd){
                result.push_back(i);
            }
        }
        return result;
    }
};