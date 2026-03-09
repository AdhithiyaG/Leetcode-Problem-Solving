class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int neededValue=target-nums[i];
            if(mp.find(neededValue)!=mp.end()){
                return {i,mp[neededValue]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};