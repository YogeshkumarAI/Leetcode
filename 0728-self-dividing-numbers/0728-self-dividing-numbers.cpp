class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> arr;
        for(int i = left; i <= right; i++){
        bool valid = true;
            int temp = i;
            int orgi = i;   


            while(temp > 0){
                int d = temp % 10;
                temp = temp / 10;

                if(d == 0){
                    valid = false;
                }

        else if(orgi % d != 0){
            valid = false;
            }
        }


        if(valid == true){
            arr.push_back(orgi);
        }  
    } 
     return arr;
    }
};