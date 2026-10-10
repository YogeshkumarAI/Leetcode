class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // kadane algorithm;
        int n = nums.size();

        int currMin = nums[0];
        int currMax = nums[0];
        int Maxi = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] < 0){
                swap(currMax, currMin);
            }
            currMax = max((long long)nums[i],(long long)currMax * nums[i]);
            currMin = min((long long)nums[i],(long long)currMin * nums[i]);

            Maxi = max(Maxi, currMax);
        }

        return Maxi;
    }
};