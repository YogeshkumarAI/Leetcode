class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> summatrix;
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                sum += matrix[i][j];
            }
            summatrix.push_back(sum);
        }
        return summatrix;
    }
};