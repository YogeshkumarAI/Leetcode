class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int orgi = x;
        int sum = 0;

        while(x > 0){
            int d = x % 10;
            sum += d;
            x = x / 10;
        }

        return orgi % sum == 0 ? sum : -1;
    }
};