class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int i = 0;
        int j = 0;

        int n = s.length()-1;
        int m = t.length()-1;


        stack<char> st1;
        stack<char> st2;

        int top1 = -1;
        int top2 = -1;


    while (i <= n) {
        if (s[i] == '#') {
            if (!st1.empty())
            st1.pop();
    }
        else {
            st1.push(s[i]);
            }

            i++;
    }

    
    while (j <= m) {
    if (t[j] == '#') {
        if (!st2.empty())
            st2.pop();
    }
    else {
        st2.push(t[j]);
    }
    j++;    
        }


    if(st1.size() != st2.size()){
            return false;
    }

    while(!st1.empty()){
        if(st1.top() != st2.top()){

            return false;
        }
            st1.pop();
            st2.pop();
    }

    return true;
    }
};