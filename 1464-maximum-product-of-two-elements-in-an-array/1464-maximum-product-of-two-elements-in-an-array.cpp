class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(), nums.end());

        int maxProduct = INT_MIN;
        // int product;
        for(int i = 0; i< nums.size(); i++){
            int product = 0;
        for(int j = i + 1; j < nums.size(); j++){
            product = ((nums[i] - 1) * (nums[j] - 1));
            maxProduct = max(maxProduct, product); 
        }
     }
     return maxProduct;
}
};