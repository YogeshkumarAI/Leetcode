class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        
        int a = 0;
        int b = 0;

        vector<int> ans;
        for(int b = 0; b < n; b++){
            a = n - b;

             // check a and b contain no zero
            if (to_string(a).find('0') == string::npos &&
                to_string(b).find('0') == string::npos) {

                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        

        return ans;
    }
};