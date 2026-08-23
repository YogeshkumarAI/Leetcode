class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digitsum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            int temp = nums[i];

            while(temp > 0){
            int d = temp % 10;
            digitsum += d;
            temp = temp / 10;
            }
        }

        int result = abs(sum - digitsum);

        return result;
    }
};