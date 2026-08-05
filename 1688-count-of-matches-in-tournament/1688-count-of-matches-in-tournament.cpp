class Solution {
public:
    int numberOfMatches(int n) {
        int eventeams = n / 2;
        int oddteams = (n - 1) / 2;


        int EvenTmMtch = eventeams;
        int OddTmMtch = oddteams + 1;

        int even = eventeams + EvenTmMtch - 1;
        int odd = oddteams + OddTmMtch - 1;

        return n % 2 == 0 ? even : odd;
    }
};