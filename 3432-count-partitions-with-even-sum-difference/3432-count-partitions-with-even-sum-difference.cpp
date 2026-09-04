class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int sum1 = 0;
        for(int i = 0; i < n-1; i++){
            sum1 += nums[i]; 

            int sum2 =0;
            for(int j = n-1; j > i; j--){
                sum2 += nums[j];
            }
            
            int ans = abs(sum1 - sum2);

            if(ans % 2 == 0){
                count++;
            }
        }

        return count;
    }
};