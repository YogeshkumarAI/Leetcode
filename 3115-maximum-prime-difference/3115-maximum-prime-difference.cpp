class Solution {
public:

bool isPrime(int index) {
    if (index < 2)
        return false;

    for (int i = 2; i * i <= index; i++) {
        if (index % i == 0)
            return false;
    }

    return true;
}


    int maximumPrimeDifference(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < n; i++){
            if(isPrime(nums[i])){
                res.push_back(i);
            }
        }

        int MinIndex = res[0];
        int MaxIndex = res.back();
        
        return MaxIndex - MinIndex;
    }
};