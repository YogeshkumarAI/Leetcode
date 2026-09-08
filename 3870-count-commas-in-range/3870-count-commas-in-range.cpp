class Solution {
public:
    int countCommas(int n) {
        
        if(n < 1000){
            return 0;
        }

        if(n < 1000000){
            return (n-999);
        }
        return 90000 + 2 *(n-99999);
    }
};