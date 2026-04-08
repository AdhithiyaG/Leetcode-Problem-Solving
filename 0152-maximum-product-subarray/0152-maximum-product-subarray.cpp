class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int n = nums.size();
        // int maxProduct = 0;
        // if(n==1){
        //     return nums[0];
        // }
        // for (int i = 0; i < n; i++) {
        //     int product = 1;
        //     for (int j = i; j < n; j++) {
        //         product *= nums[j];
        //         maxProduct = max(product, maxProduct);
        //     }
        // }
        // return maxProduct;

        int prefixProduct = 1;
        int suffixProduct = 1;
        int n = nums.size();
        int maxProduct = INT_MIN;
        for (int i = 0; i < n; i++) {
            prefixProduct *= nums[i];
            maxProduct = max(prefixProduct, maxProduct);
            if (nums[i] == 0) {
                prefixProduct = 1;
            }
        }
        for (int i = n-1; i >=0; i--) {
            suffixProduct *= nums[i];
            maxProduct = max(suffixProduct, maxProduct);
            if (nums[i] == 0) {
                suffixProduct = 1;
            }
        }
        return maxProduct;
    }
};