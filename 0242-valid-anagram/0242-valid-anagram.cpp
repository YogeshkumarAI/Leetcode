class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        int m = t.size();

        if(n != m){
            return false;
        }

        int freq[26] = {0};

        for(char ch : s){
            freq[ch - 'a']++;
        }

        for(char ch : t){
            freq[ch - 'a']--;
        }

        // int count = 0;
        for(int count : freq){
            if(count != 0){
                return false;
            }
        }

            return true;
    }
};