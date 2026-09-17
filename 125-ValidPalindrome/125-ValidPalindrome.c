// Last updated: 9/17/2026, 1:34:38 PM
bool isPalindrome(char* s) {
    int left = 0, right = strlen(s) - 1;

    while (left < right) {
        char a = s[left];
        char b = s[right];

        // If uppercase, convert to lowercase
        if (a >= 'A' && a <= 'Z') a = (char)(a + 32);
        if (b >= 'A' && b <= 'Z') b = (char)(b + 32);

        // Skip non-alphanumeric
        if (!((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))) {
            left++;
            continue;
        }
        if (!((b >= 'a' && b <= 'z') || (b >= '0' && b <= '9'))) {
            right--;
            continue;
        }

        // Compare both ends
        if (a != b) return false;

        left++;
        right--;
    }

    return true;
}