class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0, i = 0;
        while (i < operations.size()) {
            if (operations[i] == "--X") {
                x = x - 1;
            } else if (operations[i] == "X--") {
                x = x - 1;
            } else if (operations[i] == "X++") {
                x = x + 1;
            } else {
                x = x + 1;
            }
            i++;
        }
        return x;
    }
};