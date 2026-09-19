class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
                int n = nums.size();
        int ans = 0;
        int sum = 0;
        int closest_diff = INT_MAX;
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j< n; j++){
                for(int k = j + 1; k < n; k++){
                    sum = nums[i] + nums[j] + nums[k];

                int current_diff = abs(sum - target);
                if(current_diff  < closest_diff){
                    ans = sum;
                    closest_diff = current_diff;
                     }
                }
            }
        }

        return ans;
    }
};