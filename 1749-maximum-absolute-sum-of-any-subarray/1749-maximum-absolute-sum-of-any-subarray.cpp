class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int n = nums.size();

        int currentMax = nums[0];
        int maxSum = nums[0];

        int currentMin = nums[0];
        int minSum = nums[0];


        for(int i = 1; i < n; i++){
        // maxsubarray sum;
            currentMax = max(nums[i], currentMax + nums[i]);
            maxSum = max(maxSum, currentMax);

        // minsubarray sum;
            currentMin = min(nums[i], currentMin + nums[i]);
            minSum = min(minSum, currentMin);
        }

        int ans = max(abs(maxSum), abs(minSum));

        return ans;
    }
};