class Solution {

        long long TotalTime(vector<int> &piles, int mid){
        int n = piles.size();
        long long total = 0;

        for(int i = 0; i < n; i++){
            total += ceil((double)piles[i] / (double) mid);
        }

        return total;
        }

        // int findmax(vector<int> &piles){
        // int maxi = INT_MIN;
        // int n = piles.size();

        // for(int i = 0; i < piles.size(); i++){
        //     maxi = max(maxi, piles[i]);
        // }
        // return maxi;
        // }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high){
            int mid = low + (high - low) / 2;
            long long total = TotalTime(piles, mid);

            if(total <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};