class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentSum = nums[0];
        int currentMin = nums[0];

        int maxSum = nums[0];
        int minSum = nums[0];

        int total = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            total += nums[i];

            // Maximum subarray
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);

            // Minimum subarray
            currentMin = min(nums[i], currentMin + nums[i]);
            minSum = min(minSum, currentMin);
        }

        // All elements are negative
        if(maxSum < 0)
            return maxSum;

        // Circular subarray
        int MaximumCircularSum = max(maxSum, total - minSum);

        return MaximumCircularSum;
    }
};