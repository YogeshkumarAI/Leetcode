class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> mp1;
        map<int, int> mp2;

        for(auto i : nums1){
            mp1[i]++;
        }

        for(auto i : nums2){
            mp2[i]++;
        }


        vector<int> ans;
        for(auto [key, freq] : mp1){
            if(mp2.count(key)){
                ans.push_back(key);
            }
        }

        return ans;
    }
};