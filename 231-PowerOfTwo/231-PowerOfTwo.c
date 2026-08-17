// Last updated: 8/17/2026, 7:27:37 PM
bool isPowerOfTwo(int n) {
     return (n > 0) && ((n & (n - 1)) == 0);
}