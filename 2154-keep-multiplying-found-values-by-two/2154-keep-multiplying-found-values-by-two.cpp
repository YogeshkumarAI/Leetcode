class Solution {
    bool ispresent(vector<int>&nums, int original){

   if(find(nums.begin(), nums.end(), original) != nums.end()){
            return true;
         }

         return false;
    }

public:
    int findFinalValue(vector<int>& nums, int original) {
        // int maxi = original;

       if(ispresent(nums, original) == true){
        while(ispresent(nums, original)){
            original *= 2;

            }
         }

       return original;
    }
};