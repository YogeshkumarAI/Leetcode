class Solution {
public:
    bool checkDivisibility(int n) {
        int orgi = n;
        int sum = 0;
        int prod = 1;

        while(n > 0){
            int d = n % 10;
            sum += d;
            prod *= d;
            n = n / 10; 
        }

        int total = sum + prod;

        return orgi % total == 0 ? true : false;
    }
};