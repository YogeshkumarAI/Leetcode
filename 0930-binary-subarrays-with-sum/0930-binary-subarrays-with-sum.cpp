class Solution {
        int AtMost(vector<int>&nums, int goal){
        if(goal < 0)return 0;
        int n = nums.size();
        int i = 0;
        int count = 0;
        unsigned int sum = 0;
        for(int j = 0; j < n; j++){
            sum += nums[j];

            while(sum > goal){
                sum = sum - nums[i];
                    i++;
                }
                count += (j - i + 1) ;
            }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return AtMost(nums, goal) - AtMost(nums, goal - 1);
    }
};