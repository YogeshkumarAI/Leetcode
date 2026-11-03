class Solution {
public:
    string removeStars(string s) {
        
        int n = s.size();

        stack<char> st;

        for(int i = 0; i < n; i++){
            // 1. check stack is empty;
            if(st.empty()){
                st.push(s[i]); }

            else
                if(s[i] != '*'){ // if char is star;
                    st.push(s[i]);
                }

                else{
                    st.pop();
                }
                    // int star = st.top();
                }


        // now we have to pop all the stack elements;
        string ans = "";

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        // reversing the string;
        reverse(ans.begin(), ans.end());

        return ans;
    }
};