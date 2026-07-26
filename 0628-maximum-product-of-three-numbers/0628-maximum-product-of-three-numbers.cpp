class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest1 = INT_MIN;
        int largest2 = INT_MIN;
        int largest3 = INT_MIN;

        int smallest1 = INT_MAX;
        int smallest2 = INT_MAX;

        for(int x = 0; x < nums.size(); x++){
        if (nums[x] >= largest1) {
            largest3 = largest2;
            largest2 = largest1;
            largest1 = nums[x];   
        }
        else if (nums[x] >= largest2) {
            largest3 = largest2;
            largest2 = nums[x];
        }
        else if (nums[x] > largest3) {
            largest3 = nums[x];
        }   

        if (nums[x] <= smallest1) {
            smallest2 = smallest1;
            smallest1 = nums[x];
    }
        else if (nums[x] < smallest2) {
            smallest2 = nums[x];
    }
}

    int product1 = largest1 * largest2 * largest3;
    int product2 = smallest1 * smallest2 * largest1;

    int maxprod = max(product1, product2);

    return maxprod;

    }
};