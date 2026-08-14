class Solution {
public:
    int findClosest(int x, int y, int z) {
        int close1 = abs(z - x);
        int close2 = abs(z - y);

        if(close1 < close2){
            return 1; // person 1;
        }
        else if(close1 > close2){
            return 2; // person 2;
        }


return 0; // equal distance;
    }
};