class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> Nums = arr;
        sort(Nums.begin(), Nums.end());

            int rank = 1;
            unordered_map<int,int> mp;
        for(int i = 0; i < Nums.size(); i++){
            if(i == 0 || Nums[i] != Nums[i - 1]){
                mp[Nums[i]] = rank;
                rank++;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};