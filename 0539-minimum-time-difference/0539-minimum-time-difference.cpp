class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // Mintues = Hours × 60 + Mintues

        vector<int> Mintues;
        int n = timePoints.size();

        for(int i = 0; i < n; i++){
            int Hour = (timePoints[i][0] - '0') * 10 // first digit of hour;
                     + (timePoints[i][1] - '0'); // second digit of hour;

            int minute = (timePoints[i][3] - '0') * 10 // first digit of mintue;
                        + (timePoints[i][4] - '0'); // second digit of minute;

        Mintues.push_back(Hour * 60 + minute);
        }   

        sort(Mintues.begin(), Mintues.end());

        int m = Mintues.size();
        int Minitime = 1440;

        for(int i = 1; i < m; i++){
            int res =  Mintues[i] - Mintues[i - 1];
            Minitime = min(Minitime, res);
        }
        //  circular logic;
        int res = 1440 - Mintues[m - 1] + Mintues[0];
            Minitime = min(Minitime, res);

        return Minitime;
    }
};