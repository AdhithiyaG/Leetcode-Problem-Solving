class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalSum=0;
        for(int x:nums){
            totalSum+=x;
        }
        return totalSum%k;
    }
};