// Last updated: 9/9/2026, 9:15:46 AM
int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        product *= digit;    // Update product
        sum += digit;        // Update sum
        n /= 10;             // Remove the last digit
    }

    return product - sum;
}