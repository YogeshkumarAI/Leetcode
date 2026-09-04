class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        int minele = INT_MAX; 

        vector<int>MinimumElementIndex(n);
        for(int i = n - 1; i >= 0; i--){
            minele = min(minele, nums[i]);
            MinimumElementIndex[i] = minele;
        }


        int maxele = INT_MIN;
        for(int i = 0; i < n; i++){
            maxele = max(maxele, nums[i]); // maxelement;
            // minele = MinimumElementIndex[i];

            if(maxele - MinimumElementIndex[i] <= k){
                return i;
            }
        }
        return -1;
    }
};