class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minele = INT_MAX;
        int maxele = INT_MIN;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            minele = min(minele, nums[i]);
            maxele = max(maxele, nums[i]);
        }

        for(int i = minele; i <= maxele; i++){
            if(find(nums.begin(), nums.end(), i) == nums.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};