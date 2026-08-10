class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // int n = nums.size();
        int freq[1000] = {0};
        vector<int>ans;
        for(int x : nums){
            freq[x]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(freq[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};