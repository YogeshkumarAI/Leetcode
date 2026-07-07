class Solution {
public:
    long long sumAndMultiply(int n) {
       long int rem = 0;
        int place = 1;
        long int sum = 0;


        while(n > 0){
            int d = n % 10;

            if(d != 0){
                rem = d * place + rem; // for creating a number;
                place *= 10; // for placing a digit in their apporciate place;
                sum += d;  // sum of digits;
            }

            n = n / 10;
        } 
        return sum * rem;
    }
};