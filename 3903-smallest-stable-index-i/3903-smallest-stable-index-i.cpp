class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int maxele = INT_MIN;
            int minele = INT_MAX;

            for(int j = 0; j <= i; j++){
                maxele = max(maxele, nums[j]);
            }

            for(int j = i; j <= n-1; j++){
                minele = min(minele, nums[j]);
            }

            if(maxele - minele <= k){
                return i;
            }
        }

        return -1;
    }
};