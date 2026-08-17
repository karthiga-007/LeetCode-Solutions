// Last updated: 8/17/2026, 7:29:12 PM
int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    if (m > n) return -1;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == m) return i;  // Match found
    }

    return -1;
}