class Solution {
public:
    int maxProduct(int n) {
         int largest = 0;
        int secondLargest;
        int digit;
        while(n > 0){
         digit = n % 10;
        
        n = n / 10;

        
        if (digit > largest) {
    secondLargest = largest;
    largest = digit;
    }
    else if (digit > secondLargest) {
        secondLargest = digit;


        largest = max(largest, digit);
        }
        }


        return largest * secondLargest;
    }
};