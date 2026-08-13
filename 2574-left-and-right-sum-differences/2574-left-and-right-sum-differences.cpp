class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n);
        vector<int> rightsum(n);

        leftsum[0] = 0;          // first element always 0
        rightsum[n - 1] = 0;     // last element always 0

        for(int i = 1; i < n; i++){
            leftsum[i] = leftsum[i - 1] + nums[i - 1]; 
        }

        for(int i = n - 2; i >= 0; i--){
            rightsum[i] = rightsum[i+1] + nums[i+1]; 
        }

        vector<int>answer(n);
        for(int i = 0; i < n; i++){
            answer[i] = abs(leftsum[i] - rightsum[i]);
        }
        return answer;
    }
};