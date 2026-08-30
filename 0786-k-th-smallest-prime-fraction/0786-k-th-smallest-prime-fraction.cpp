class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
        int n = arr.size();
        vector<pair<int,int>> result;

        int i = 0;
        int j = 1;

        while(i < n - 1){
            while(j < n){
                result.push_back({arr[i], arr[j]});
                j++;
            }
            i = i + 1;
            j = i + 1;
        } // 1/2, 1/3, 1/5, 2/3, 2/5, 3/5;

        // sort(result.begin(), result.end()); its doesn't works bcz its num / deno;
        // then sort vector become 
        // 1/5, 1/3, 2/5, 1/2, 3/5, 2/3;
// index : 1     2   3    4   5     6
        // k = 3;
        sort(result.begin(), result.end(), [](auto &a, auto &b) {
    return (long long)a.first * b.second < 
           (long long)b.first * a.second;
}); 

    return {result[k-1].first, result[k-1].second};
    }
};