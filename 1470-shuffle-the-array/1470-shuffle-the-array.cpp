class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        vector<int> y;

        for(int i = 0; i < nums.size(); i++){
            if(i < n){
                x.push_back(nums[i]);
            }
            else{
                y.push_back(nums[i]);
            }
        }

        
    nums.clear();
    for (int i = 0; i < n; i++) {
    nums.push_back(x[i]);
    nums.push_back(y[i]);
}

return nums;
    } 
};