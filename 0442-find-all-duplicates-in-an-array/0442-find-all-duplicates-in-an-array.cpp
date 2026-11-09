class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] > 1){

                if(find(ans.begin(), ans.end(), nums[i]) == ans.end()){
                    ans.push_back(nums[i]);
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};