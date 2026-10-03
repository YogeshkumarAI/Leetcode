class Solution {
    vector<string> suffix;
public:
    bool PrefixAndSuffix(string words1, string words2){
             int n1 = words1.length();
             int n2 = words2.length();

            if(n1 > n2){
                return false;
            }
            
            if(words2.substr(0, n1) == words1 && words2.substr(n2 - n1, n1) == words1){
             return true;   
                }
            return false;
             }

    int countPrefixSuffixPairs(vector<string>& words) {
        
        int n = words.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(PrefixAndSuffix(words[i], words[j])){
                    count++;
                }
            }
        }

        return count;
    }
};