class Solution {
public:
    int mirrorDistance(int n) {

        int orgi = n;
        int m = 0;
        while(n > 0){
            int d = n % 10;
            m = (m * 10) + d;
            n = n / 10;
        }

        return abs(orgi - m);
    }
};