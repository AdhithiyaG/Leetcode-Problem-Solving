class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            int n = temp.size();
            if (n < 2 || temp[n - 2] != nums[i]) {
                temp.push_back(nums[i]);
            }
            k = temp.size();
            for (int i = 0; i < k; i++) {
                nums[i] = temp[i];
            }
        }
        return k;
    }
};