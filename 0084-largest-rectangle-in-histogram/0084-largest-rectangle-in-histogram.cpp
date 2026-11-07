class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();

        vector<int> NSR(n);
        vector<int> NSL(n);

        stack<int>st;

        for(int i = 0; i < n; i++){
        //1. calculating next smaller elements in right side;
            while(!st.empty() && heights[st.top()] > heights[i]){
                NSR[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        while(!st.empty()){
            NSR[st.top()] = n;
            st.pop();
        }

        for(int i = n-1; i >= 0; i--){
            //2. calculating next smaller elements in left side;
            while(!st.empty() && heights[st.top()] > heights[i]){
                NSL[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        while(!st.empty()){
            NSL[st.top()] = -1;
            st.pop();
        }


        int best = 0;
        for(int i = 0; i < n; i++){
            best = max(best, heights[i]*(NSR[i] - NSL[i] - 1));
        }

        return best;
    }
};