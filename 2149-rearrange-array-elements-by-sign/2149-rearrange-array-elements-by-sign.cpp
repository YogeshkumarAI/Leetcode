class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> V1;
        vector<int> V2;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                V1.push_back(nums[i]);
            }
            else{
                V2.push_back(nums[i]);
            }
        }


    vector<int>V3(n);
    int i = 0;
    int j = 0;

        for(int k = 0; k < n; k += 2){
            V3[k] = V1[i++];
        }

        for(int k = 1; k <= n; k += 2){
            V3[k] = V2[j++];
        }
        return V3;
    }
};