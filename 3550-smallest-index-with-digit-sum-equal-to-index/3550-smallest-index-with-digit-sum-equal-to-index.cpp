class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = -1;
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            int sum = 0;
            while(temp > 0){
                int d = temp % 10;
                sum += d;
                temp /= 10;
            }

            if(sum == i){
                ans = i;
                break;
            }
        }
        return ans;
    }
};