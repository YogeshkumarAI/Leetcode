class Solution {
public:
    bool isStrictlyPalindromic(int n) {
    
    string s = bitset<32>(n).to_string();
    s = s.substr(s.find('1'));

    while (s.length() < 4)
        s = "0" + s;

    int left = 0;
    int right = s.size()-1;

    while(left < right){
        if(s[left] != s[right]){
            return false;
            left++;
            right--;
        }
    }
        return true;
    }
};