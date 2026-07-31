class Solution {
public:
    int maxArea(vector<int>& height) {
        int best = 0;
        int left = 0;
        int right = height.size()-1;

        while(left < right){
            int h = min(height[left], height[right]);

            best = max(best, h * (right - left));

            if(height[left] < height[right]){
                left += 1; 
            }
            else{
                right -= 1;
            }
        }
        return best;
    }
};