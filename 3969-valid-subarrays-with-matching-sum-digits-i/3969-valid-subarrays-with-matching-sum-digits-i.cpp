class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        
        int n = nums.size();
        long long int answer = 0; 
        for(int i = 0; i < n; i++){
             long long int sum = 0;
        // int firstdigit = 0;
        // int lastdigit = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];

                long long int temp = sum;
                int lastdigit = temp % 10; // taking out lastdigit;
                // taking out first digit;
                while(temp >= 10) {
                    temp = temp / 10;
                }
                int firstdigit = temp;
                if(firstdigit == x && lastdigit == x){
                    answer++;
                }
            }            
        }

        return answer;
    }
};