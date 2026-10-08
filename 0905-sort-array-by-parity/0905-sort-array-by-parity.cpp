class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();

        int low = 0;
        int mid = 0;
        int high = n - 1;

        while(mid <= high){
            if(nums[mid] % 2 == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }

            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }

        return nums;
    }
};