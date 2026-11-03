class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        int totalcount = 0;
        for(int i = 0; i < n; i++){
            totalcount += maxi - nums[i];
        }

        return totalcount;
    }
};