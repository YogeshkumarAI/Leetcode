class Solution {
public:
    vector<vector<int>> memo;
    bool checkValidString(string s) {
        int n = s.size();
        memo.assign(n, vector<int>(n + 1, -1));
        return solve(s, 0, 0);
    }
private:
    bool solve(const string& s, int index, int balance) {
        if (balance < 0) return false;
        if (index == (int)s.size()) return balance == 0;
        if (memo[index][balance] != -1) return memo[index][balance];
        char c = s[index];
        bool result = false;
        if (c == '(') {
            result = solve(s, index + 1, balance + 1);
        } else if (c == ')') {
            result = solve(s, index + 1, balance - 1);
        } else {
            bool useAsOpening = solve(s, index + 1, balance + 1);
            bool useAsClosing = solve(s, index + 1, balance - 1);
            bool useAsEmpty = solve(s, index + 1, balance);
            result = useAsOpening || useAsClosing || useAsEmpty;
        }
        memo[index][balance] = result;
        return result;
    }
};