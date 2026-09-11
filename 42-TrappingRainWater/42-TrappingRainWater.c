// Last updated: 9/11/2026, 11:53:41 AM
1bool isPalindrome(char* s) {
2    int left = 0, right = strlen(s) - 1;
3
4    while (left < right) {
5        char a = s[left];
6        char b = s[right];
7
8        // If uppercase, convert to lowercase
9        if (a >= 'A' && a <= 'Z') a = (char)(a + 32);
10        if (b >= 'A' && b <= 'Z') b = (char)(b + 32);
11
12        // Skip non-alphanumeric
13        if (!((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))) {
14            left++;
15            continue;
16        }
17        if (!((b >= 'a' && b <= 'z') || (b >= '0' && b <= '9'))) {
18            right--;
19            continue;
20        }
21
22        // Compare both ends
23        if (a != b) return false;
24
25        left++;
26        right--;
27    }
28
29    return true;
30}