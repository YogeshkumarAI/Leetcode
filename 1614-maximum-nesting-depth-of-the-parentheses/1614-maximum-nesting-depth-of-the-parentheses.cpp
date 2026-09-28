class Solution {
public:
    int maxDepth(string s) {
        
        int d = 0;
        int res = 0;

        for(auto x : s){
            if(x == '('){
                d++;
                res = max(res, d);
            }

            else if(x == ')'){
                d--;
            }
        }

        return res;
    }
};