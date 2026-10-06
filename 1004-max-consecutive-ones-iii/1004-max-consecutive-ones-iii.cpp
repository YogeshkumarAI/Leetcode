class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();

        int left = 0;
        int maxcount = 0;
        int count = 0;

        for(int right = 0; right < n; right++){
            if(nums[right] == 0){
                count++;
            }

            while(count > k){
                if(nums[left] == 0){
                    count--;
                }
                left++;
            }

            int length = right - left + 1;
            if(length > maxcount){
                maxcount = length;
            }
        }

        return maxcount;
    }
};