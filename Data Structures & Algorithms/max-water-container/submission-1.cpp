class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int i=0,j=height.size()-1;
        while(i<j){
            int curr = min(height[i],height[j])*(j-i);
            ans=max(ans,curr);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;   
    }
};
