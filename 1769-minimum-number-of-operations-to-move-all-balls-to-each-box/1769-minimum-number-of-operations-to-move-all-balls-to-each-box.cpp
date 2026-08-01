class Solution {
public:
    vector<int> minOperations(string boxes) {
        // j = ballIndex
        // i = targetindex;
        // abs(ballindex - targetindex);
        int n = boxes.size();
        vector<int>answer;
        for(int i = 0; i < n; i++){
            int moves = 0;

            for(int j = 0; j < n; j++){
                if(boxes[j] == '1'){
                    moves += abs(i - j);
            }
                }
            answer.push_back(moves);
        }

        return answer;
    }
};