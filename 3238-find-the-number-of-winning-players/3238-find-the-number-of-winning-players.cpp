class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        // First number (xi) = Player number
        // Second number (yi) = Color number
        int winner= 0;
        vector<vector<int>> freq(n, vector<int>(11, 0));
        for (auto &p : pick) {
    int player = p[0];
    int color = p[1];
        freq[player][color]++;
        }

       
        for(int player = 0; player < n; player++){
            for(int color = 0; color <= 10; color++){
                if(freq[player][color] >= player + 1){
                    winner++;
                    break;
                }
            }
        }

        return winner;
    }
};