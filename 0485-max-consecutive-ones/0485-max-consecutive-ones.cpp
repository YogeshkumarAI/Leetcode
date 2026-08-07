class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak = 0;
        int maxstreak = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 1){
                    streak++;
                }
                else{
                    streak = 0;
                }
            
            maxstreak = max(maxstreak, streak);
        }
        return maxstreak;
    }
};