class Solution {
    stack<char> st;
    int top = -1;

    bool ismatching(char open, char close){
        if(open == '(' && close == ')') return true;
        if(open == '[' && close == ']') return true;
        if(open == '{' && close == '}') return true;

        return false;
    }

public:
    bool isValid(string s) {
        
        for(int i = 0; s[i] != '\0'; i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			st.push(s[i]);
		}
        
		else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
			if(st.empty())
				return false;

			char last = st.top();
            st.pop();
		
		if(!ismatching(last, s[i]))
			return false;
	    }
     }
        return st.empty();
    }
};