class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
 

        int x = 0;
        for(int first : arr1){
            x ^= first; 
        }


        int y = 0;
        for(int second : arr2){
            y ^= second; 
        }

        int result = x & y;
        return result;
    }
};