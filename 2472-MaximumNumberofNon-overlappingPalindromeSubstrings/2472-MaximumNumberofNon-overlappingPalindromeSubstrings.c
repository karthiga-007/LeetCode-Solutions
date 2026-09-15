// Last updated: 9/15/2026, 7:50:46 PM
1bool isPalindrome(char* s, int left, int right) {
2    while (left < right) {
3        if (s[left] != s[right]) {
4            return false;
5        }
6
7        left++;
8        right--;
9    }
10
11    return true;
12}
13
14int maxPalindromes(char* s, int k) {
15    int n = strlen(s);
16    int count = 0;
17    int lastEnd = 0;
18
19    for (int right = k - 1; right < n; right++) {
20        int left = right - k + 1;
21
22        bool add =
23            (left >= lastEnd && isPalindrome(s, left, right)) ||
24            (left > lastEnd && isPalindrome(s, left - 1, right));
25
26        if (add) {
27            count++;
28            lastEnd = right + 1;
29        }
30    }
31
32    return count;
33}