class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0; 
        int j = 0;
    int max_length = 0;

        map<int, int> Map;

        while(j < fruits.size()){
            Map[fruits[j]] = Map[fruits[j]] + 1;


            while(Map.size() > 2){
                Map[fruits[i]] = Map[fruits[i]] - 1;

                if(Map[fruits[i]] == 0) {
                    Map.erase(fruits[i]);
                }
                i++;
            }

             max_length = max(max_length, j - i + 1);   
            j++;
        }
        return max_length;
    }
};