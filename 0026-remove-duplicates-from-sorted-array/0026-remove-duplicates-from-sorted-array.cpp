class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        // vector<int> temp; 
        // temp.push_back(nums[0]);
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]!=nums[i]){
        //         temp.push_back(nums[i]);
        //     }
        // }
        // int k=temp.size();
        // for(int i=0;i<k;i++){
        //     nums[i]=temp[i];
        // }
        // return k;

        //Using two pointers i and k 
        //where k tracks the poiner in which the unique elements will get placed 
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};