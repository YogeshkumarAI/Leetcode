class Solution {
public:
    int getLeastFrequentDigit(int n) {
        
        int temp = n;
        map<int, int>mp;
        int min_freq = INT_MAX;
        int ans = 0;

        while(temp > 0){
            int d = temp % 10;
            mp[d]++;
            temp = temp / 10;
        }

        for(auto x : mp){
            if(x.second < min_freq){
                min_freq = x.second;
                ans = x.first;
            }
        }

    return ans;
    }
};