class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int a=target-nums[i];
            if(mp.find(a)!=mp.end() && mp[a]!=i)return {mp[a],i};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
