class Solution {
public:
    bool isprime(int n){
    bool prime = true;

    if (n <= 1) {
        prime = false;
    } 
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }
    return prime;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
         int freq[101] = {0};

    for(int x : nums){
        freq[x]++;
    }

    for(int i = 0; i <= 100; i++){
        if(isprime(freq[i])){
            return true;
        }
    }
    return false;
    }
};