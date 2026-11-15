class Solution {
public:
    bool isHappy(int num) {
        long long sum = 0;
        int temp = num;

        while (true) {
            sum = 0;
            temp = num;

            while (temp > 0) {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
            if (sum == 1)
                return true;
            num = sum;
            if (num == 4) {
                return false;
            }
        }
    }
};