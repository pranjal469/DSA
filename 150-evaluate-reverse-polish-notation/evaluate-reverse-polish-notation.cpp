class Solution {
public:
int operate(int a, int b,string op ){
    if(op== "+")return b + a;
    if(op== "-")return b - a;
    if(op== "/")return b / a;
    if(op== "*")return b * a;
    return -1;
}

    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int a =0;
        int b =0;
        int result =0;
        int n = tokens.size();
        if(n == 1){
            return stoi(tokens[0]);
        }
         for(int i =0;i<n;i++){
            if(tokens[i]=="+" ||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="*"){
             a = st.top();
             st.pop();
             b = st.top();
             st.pop();
             result = operate (a , b , tokens[i]);
             st.push(result);
            }
            else{
                st.push(stoi(tokens[i]));
            }
         }
         return result;
    }
};