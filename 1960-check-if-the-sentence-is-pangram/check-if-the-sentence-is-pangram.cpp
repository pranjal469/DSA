class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count =0;
        int n = sentence.length();
     vector<int> arr(26,1);
     for(int i = 0;i<n;i++){
        int idx = sentence[i] - 'a';
        if(arr[idx]==1){
        arr[idx]--;
        count ++;
        }
     }
     if(count == 26){
        return true;
     }else return false ;
     
    }
};