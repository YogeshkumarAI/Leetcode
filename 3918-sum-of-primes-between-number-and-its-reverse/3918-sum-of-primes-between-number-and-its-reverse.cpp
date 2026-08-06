class Solution {
    bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
public:
    int sumOfPrimesInRange(int n) {
        int temp = n;
        int num = 0;
        while(temp > 0){
            int d = temp % 10;
            num = num * 10 + d;
            temp = temp / 10;
        }
        
        int sum = 0;
        int start = min(n ,num);
        int end = max(n, num);
        for(int i = start; i<= end; i++){
            if(isPrime(i)){
                sum += i;
            }
        }
        
        return sum;
    }
};