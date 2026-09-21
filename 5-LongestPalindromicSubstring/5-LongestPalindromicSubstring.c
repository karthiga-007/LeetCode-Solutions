// Last updated: 9/21/2026, 9:04:51 AM
1char* longestPalindrome(char* s) {
2    int n = strlen(s);
3    if (n < 2)
4        return s;
5
6    int st = 0;
7    int maxlen = 1;
8
9    for (int i = 0; i < n; i++) {
10
11        // Odd length palindrome
12        int l = i;
13        int r = i;
14
15        while (l >= 0 && r < n && s[l] == s[r]) {
16            if (r - l + 1 > maxlen) {
17                st = l;
18                maxlen = r - l + 1;
19            }
20            l--;
21            r++;
22        }
23
24        // Even length palindrome
25        l = i;
26        r = i + 1;
27
28        while (l >= 0 && r < n && s[l] == s[r]) {
29            if (r - l + 1 > maxlen) {
30                st = l;
31                maxlen = r - l + 1;
32            }
33            l--;
34            r++;
35        }
36    }
37
38    s[st + maxlen] = '\0';
39    return s + st;
40}