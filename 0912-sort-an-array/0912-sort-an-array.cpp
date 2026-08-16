class Solution {
public:
    void heapify(vector<int>& nums, int n, int i){
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if(l < n && nums[largest] < nums[l]){
            largest = l;
        }
        if(r < n && nums[largest] < nums[r]){
            largest = r;
        }

        if(largest != i){
            int temp = nums[largest];
            nums[largest] = nums[i];
            nums[i] = temp;
        heapify(nums, n, largest);
    }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int i;
     for(i = n/2 - 1; i>=0; i--){
    heapify(nums, n, i);
     }   

    for(i = n-1; i >= 0; i--){
        swap(nums[0], nums[i]);
        heapify(nums, i, 0);
    }
    return nums;
}

};