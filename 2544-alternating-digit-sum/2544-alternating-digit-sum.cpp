class Solution {
public:
    int alternateDigitSum(int n) {
        
        int temp = n;
int digits = 0;

while(temp > 0){
    digits++;
    temp /= 10;
}

temp = n;
int count = 0;
int sum = 0;

while(temp > 0){
    int d = temp % 10;
    count++;

    if(digits % 2 == 0){
        if(count % 2 == 1)
            sum -= d;
        else
            sum += d;
    }
    else{
        if(count % 2 == 1)
            sum += d;
        else
            sum -= d;
    }

    temp /= 10;
}
return sum;
    }
};