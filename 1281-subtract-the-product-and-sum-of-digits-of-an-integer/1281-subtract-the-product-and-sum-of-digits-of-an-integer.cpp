class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        int temp = n;
        while(temp > 0){
            int d = temp % 10;
            product *= d;
            sum += d;

            temp = temp / 10;
        }
        return product  - sum;
    }
};