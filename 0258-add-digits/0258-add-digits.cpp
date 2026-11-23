class Solution {
public:
    int addDigits(int number) {
        int temp = number;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            temp = temp / 10;
        }
        while (sum >= 10) {
            temp = sum;
            sum = 0;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit;
                temp = temp / 10;
            }
        }
        return sum;
    }
};