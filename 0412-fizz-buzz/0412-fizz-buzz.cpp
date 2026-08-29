class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string>ans;

        int count3 = 0;
        int count5 = 0;

        for(int i = 1; i <= n; i++){
            count3++;
            count5++;

            if(count3 % 3 == 0 && count5 % 5 == 0){
                ans.push_back("FizzBuzz");
                count3 = 0;
                count5 = 0;
             }
            else if(count3 % 3 == 0){
                ans.push_back("Fizz");
                count3 = 0;
            }
            else if(count5 % 5 == 0){
                ans.push_back("Buzz");
                count5 = 0;
            }
            else{
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};