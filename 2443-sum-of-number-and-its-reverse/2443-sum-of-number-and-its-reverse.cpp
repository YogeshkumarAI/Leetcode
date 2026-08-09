class Solution {
public:
    
    bool sumOfNumberAndReverse(int num) {
        for(int x = 0; x <= num; x++){
            int temp = x;
            int rev = 0;

            while(temp > 0){
            int d = temp % 10;
            rev = rev * 10 + d;
            temp = temp / 10;
            }

            if(x + rev == num){
                return true;
            }
        }
        return false;
    }
};