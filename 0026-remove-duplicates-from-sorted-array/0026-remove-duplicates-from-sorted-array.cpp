class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        vector<int> temp; 
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                temp.push_back(nums[i]);
            }
        }
        int k=temp.size();
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
        return k;
    }
};