class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int result = min(n * n, maxWeight / w);

        return result;
    }
};