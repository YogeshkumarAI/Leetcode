class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int>mineleindex(n);
        int minele = INT_MAX; 

        for(int i = n - 1; i >= 0; i--){
            minele = min(minele, nums[i]);
            mineleindex[i] = minele;
        }


        int maxele = INT_MIN;
        for(int i = 0; i < n; i++){
            maxele = max(maxele, nums[i]); // maxelement;
            // minele = mineleindex[i];

            if(maxele - mineleindex[i] <= k)
                return i;         
        }
        return -1;
    }
};