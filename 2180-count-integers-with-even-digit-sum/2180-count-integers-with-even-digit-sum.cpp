class Solution {
public:
    int countEven(int num) {
        int count = 0;
        int i = 1;
        while(i <= num){
        int digitsum = 0;
            int temp = i;

            while(temp > 0){
                int d = temp % 10;
                digitsum += d;
                temp = temp / 10; 
            }
            i++;
            if(digitsum % 2 == 0){
                count++;
            }
        }

        return count;
    }
};