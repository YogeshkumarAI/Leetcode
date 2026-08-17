class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        return n > 2 ? nums[1] : -1;
    }
};