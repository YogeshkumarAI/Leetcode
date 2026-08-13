class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>result;
        vector<int>tempo;

        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            int digit;
            while(temp > 0){
                int d = temp % 10;
                tempo.push_back(d);
                temp = temp / 10;
            }
            for(int j = tempo.size() - 1; j >= 0; j--){
                result.push_back(tempo[j]);
            }
            tempo.clear();
        }

        return result;
    }
};