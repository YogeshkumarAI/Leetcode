class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size(); 

        for(int i = 0; i < n; i++){
            int temp = nums[i];
            int rev = 0;
            while(temp > 0){
                int d = temp % 10;
                rev = rev * 10 + d;
                temp = temp / 10;
            }
            nums.push_back(rev);
        }


     unordered_set<int>st;
     for(int x : nums){
        st.insert(x);
     }

     return st.size();
    }
};