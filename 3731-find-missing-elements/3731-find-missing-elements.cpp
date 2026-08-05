class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
                int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        int n = mx - mn + 1;
        vector<int> v(n);
        for (int num : nums) {
            v[num - mn] = true;
        }
        vector<int> ans;
        for (int i = mn; i <= mx; i++) {
            if (!v[i - mn]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};