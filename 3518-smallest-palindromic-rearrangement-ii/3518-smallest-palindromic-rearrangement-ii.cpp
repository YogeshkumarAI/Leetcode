class Solution {
public:
    using ll = long long;
    const ll LIMIT = 1000000LL + 5;

    // nCr with cap
    ll comb(int n, int r) {
        if (r < 0 || r > n) return 0;
        r = min(r, n - r);

        ll ans = 1;
        for (int i = 1; i <= r; i++) {
            ans = ans * (n - r + i) / i;
            if (ans > LIMIT) return LIMIT;
        }
        return ans;
    }

    // Count distinct permutations of multiset
    ll countWays(vector<int>& freq) {
        int rem = 0;
        for (int x : freq) rem += x;

        ll ways = 1;
        int left = rem;

        for (int c = 0; c < 26; c++) {
            if (freq[c] == 0) continue;

            ways *= comb(left, freq[c]);
            if (ways > LIMIT) return LIMIT;

            left -= freq[c];
        }

        return ways;
    }

    string smallestPalindrome(string s, int k) {

        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        string mid = "";

        vector<int> half(26);

        for (int i = 0; i < 26; i++) {
            if (cnt[i] & 1)
                mid.push_back(char(i + 'a'));

            half[i] = cnt[i] / 2;
        }

        ll total = countWays(half);

        if (k > total)
            return "";

        string left = "";

        int len = s.size() / 2;

        for (int pos = 0; pos < len; pos++) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0) continue;

                half[c]--;

                ll ways = countWays(half);

                if (k <= ways) {
                    left.push_back(char(c + 'a'));
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};