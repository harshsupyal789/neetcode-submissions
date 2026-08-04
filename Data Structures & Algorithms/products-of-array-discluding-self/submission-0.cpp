class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(nums.size()+1,0);
        vector<int>suffix(nums.size()+1,0);
        prefix[0]=1,suffix[n]=1;
        for(int i=1;i<=nums.size();i++){
            prefix[i]=nums[i-1]*prefix[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i]=nums[i]*suffix[i+1];
        }

        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=prefix[i]*suffix[i+1];
        }
        return ans;
    }
};
