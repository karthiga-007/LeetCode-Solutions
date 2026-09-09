// Last updated: 9/9/2026, 9:15:13 AM
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