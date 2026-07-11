class Solution {
public:
    stack<int> st;
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        int ans = 0;
        for(int i = 0; i < n; i++){

            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+"){
                st.push(stoi(operations[i]));
            }

            else if(operations[i] == "C"){
                st.pop();
            }

            else if(operations[i] == "D"){
                int x  = st.top();
                st.push(2 * x);
            }

            else if(operations[i] == "+"){
                int a = st.top();
                st.pop();

                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};