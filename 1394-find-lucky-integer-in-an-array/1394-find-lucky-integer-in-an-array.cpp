class Solution {
public:
    int findLucky(vector<int>& arr) {

        int freq[5000] = {0};
        for(int x : arr){
            freq[x]++;
        }

        int high = -1;
        int ans = 0;
        for(int i = 1; i <= arr.size(); i++){
            if(freq[i] == i){
               ans = i;
            high = max(high, ans);
            }
            
        }
        
        return high;
    }
};