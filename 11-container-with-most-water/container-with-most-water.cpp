class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater= 0;
        int i = 0;
        int j = height.size()-1;
       while (i<=j){
        int width =j-i;

        int h = min(height[i],height[j]);
        int  area = width*h;
        maxwater = max(maxwater,area);
        if(height[i]>height[j]){
            j--;
        }else{
            i++;
        }
        
       }
return maxwater;
    }
};