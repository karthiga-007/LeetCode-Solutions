// Last updated: 9/18/2026, 11:14:44 AM
1char* longestPrefix(char* s) {
2    int n = strlen(s);
3
4    int lps[n];
5    int len = 0;
6    int i = 1;
7
8    lps[0] = 0;
9
10    while (i < n) {
11        if (s[i] == s[len]) {
12            len++;
13            lps[i] = len;
14            i++;
15        }
16        else {
17            if (len != 0) {
18                len = lps[len - 1];
19            }
20            else {
21                lps[i] = 0;
22                i++;
23            }
24        }
25    }
26
27    int maxlen = lps[n - 1];
28
29    s[maxlen] = '\0';
30
31    return s;
32}