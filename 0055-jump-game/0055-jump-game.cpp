class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maximum_jump = 0;

        for(int i = 0; i< nums.size(); i++){
            if(i > maximum_jump){
                return false;
            }
        maximum_jump = max(maximum_jump, nums[i] + i);
        }
return true;
    }
};