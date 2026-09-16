class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();

        // left sum / prefix sum;
        vector<int>prefix(n, 0);

        for(int i = 0; i < n; i++){
            if(i == 0)
                prefix[i] = 0;
            
            else
                prefix[i] = prefix[i - 1] + nums[i - 1]; 
        
        }

        // right sum/ suffix sum;
        vector<int>suffix(n, 0);
        for(int i = n -1; i >= 0; i--){
            if(i == n-1)
                suffix[i] = 0;
            
            else
                 suffix[i] = suffix[i+1] + nums[i+1];
        }

        
        // Find pivot index
        for(int i = 0; i < n; i++){
            if(prefix[i] == suffix[i]){
                return i;
            }
        }

        return -1;
    }   
};