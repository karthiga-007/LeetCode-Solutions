// Last updated: 8/17/2026, 7:26:46 PM
int countDigits(int num) {
    int original = num;
    int count = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && original % digit == 0) {
            count++;
        }
        num /= 10;
    }

    return count;
}