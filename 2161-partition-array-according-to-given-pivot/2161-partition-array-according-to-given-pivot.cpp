class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> equal;
        vector<int> greater;    
        vector<int> ans;

        for(auto x : nums){
            if(x < pivot)
                less.push_back(x);
                // ans.push_back(x);
            
            else if(x == pivot)
                equal.push_back(x);
                // ans.push_back(x);

            else
                greater.push_back(x);
                // ans.push_back(x);
        }

        ans.insert(ans.end(), less.begin(), less.end());
        ans.insert(ans.end(), equal.begin(), equal.end());
        ans.insert(ans.end(), greater.begin(), greater.end());

        return ans;
    }
};