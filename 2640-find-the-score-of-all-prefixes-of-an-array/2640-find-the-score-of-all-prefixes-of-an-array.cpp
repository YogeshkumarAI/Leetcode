class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();

        int MaxElement = 0;
        vector<long long> array(n); // coversion store array;
        // array[0] = nums[0];

        for(int i = 0; i < n; i++){
            MaxElement = max(MaxElement, nums[i]);
            array[i] = nums[i] + MaxElement;
        }
        // Now the all coversion elements store in array;

        vector<long long> PrefixSum(n);
        PrefixSum[0] = array[0];

        for(int i = 1; i < n; i++){
            PrefixSum[i] = array[i] + PrefixSum[i - 1];
        }

        return PrefixSum;
    }
};