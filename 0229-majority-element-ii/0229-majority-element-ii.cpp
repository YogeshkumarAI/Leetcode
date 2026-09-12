class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // int MOD = 10000000007;
         map<int, int> mp;

        for(auto x : nums){
            mp[x]++;
        }

    // int x = (n / 3) % MOD;
        int x = n / 3;
        vector<int>ans;
        for(auto it : mp){
            if(it.second > x){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};