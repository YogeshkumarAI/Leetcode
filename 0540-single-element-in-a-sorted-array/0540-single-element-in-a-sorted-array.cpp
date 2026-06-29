class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while(low < high){
            int mid = low + (high - low) / 2;

            int left = mid - low + 1;
            int right = high - mid + 1;

            if(nums[mid] == nums[mid + 1]){
                if(right % 2 == 1){
                    low = mid + 2;
                } 
                else{
                    high = mid - 1;
                }
            }
                else if(nums[mid] == nums[mid - 1]){
                    if(left % 2 == 1){
                        high = mid - 2;
                    }
                    else{
                        low = mid + 1;
                    }
                }

                else {
                    return nums[mid];
                }
        }
        return nums[low];
    }
};