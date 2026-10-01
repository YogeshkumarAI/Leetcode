class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int, int> mp;
        for(auto x : nums){
            mp[x]++;
        } 

        vector<int> ans;
        for(int i = 1; i <= n; i++){
            // if(mp.find(i) == mp.end()){
            if(mp[i] == 2)
                ans.push_back(i);
            

        }

        for(int i = 1; i <= n; i++){
            if(mp[i] == 0)
                ans.push_back(i);
            

            // }
        }

        return ans;
    }
};