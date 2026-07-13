class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int start = to_string(low).size();
        int end = to_string(high).size();

        for(int len = start; len <= end; len++){
            for(int first = 1; first <= 10 - len; first++){
                int num = 0;
                for(int i = 0; i < len; i++){
                int digit = first + i;
                    num = num * 10 + digit;
                    }
                    if(num >= low && num <= high){
                        ans.push_back(num);
                }
            }
        }
        return ans;
    }
};