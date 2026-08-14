class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int remainder = 0;

        for(int i = 0; i < nums.size(); i++){
            remainder = nums[i] % 3;
        
        if(remainder == 1){
            remainder--; 
            count++;
        }
        else if(remainder == 2){
            remainder++;
            count++;
        }
        }
       return count;
    }
};