class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        int n = nums1.size(); // size of nums1;
        int m = nums2.size(); // size of nums2;
        int p = nums3.size(); // size of nums3;

        set<int>res;
        for(int i = 0; i < n; i++){
            int ans = 0;
            for(int j = 0; j < m; j++){
                ans = nums1[i] ^ nums2[j];

                if(ans == 0){
                    res.insert(nums1[i]);
                }
            }
        }

        for(int i = 0; i < m; i++){
                int ans = 0;
            for(int j = 0; j < p; j++){
            ans = nums2[i] ^ nums3[j];

                if(ans == 0){
                    res.insert(nums2[i]);
                }
            }
        }


        for(int i = 0; i < p; i++){
             int ans = 0;
            for(int j = 0; j < n; j++){
                ans = nums3[i] ^ nums1[j];

                if(ans == 0){
                    res.insert(nums3[i]);
                }
            }
        }
        
        vector<int> rest(res.begin(), res.end());
        return rest;
    }
};