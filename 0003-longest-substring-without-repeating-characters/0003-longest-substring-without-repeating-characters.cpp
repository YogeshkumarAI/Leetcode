class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int length = 0;
        set <char> st; 
        while(j < s.size()){
            char c = s[j];

            while(st.contains(c)){
                st.erase(s[i]);
                i++;
            }
            st.insert(c);
            length = max(length, j - i + 1);
            j++;
        }

        return length;
    }
};