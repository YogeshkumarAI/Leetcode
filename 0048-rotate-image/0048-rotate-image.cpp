class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size(); // size;

        // tranpose;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }


        // swapping between first col element ans last col element;
        for(int i = 0; i < n; i++){ // row swapping;
            int left = 0;
            int right = n - 1;
            while(left < right){
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};