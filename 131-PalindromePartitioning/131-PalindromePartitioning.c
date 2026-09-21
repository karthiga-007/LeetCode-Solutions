// Last updated: 9/21/2026, 12:01:31 PM
1int minCut(char* s) {
2    int n = strlen(s);
3
4    if (n <= 1)
5        return 0;
6
7    int *dp = malloc(n * sizeof(int));
8
9    for (int i = 0; i < n; i++)
10        dp[i] = i;
11
12    for (int i = 0; i < n; i++) {
13
14        int left = i;
15        int right = i;
16
17        while (left >= 0 && right < n &&
18               s[left] == s[right]) {
19
20            if (left == 0)
21                dp[right] = 0;
22            else if (dp[left - 1] + 1 < dp[right])
23                dp[right] = dp[left - 1] + 1;
24
25            left--;
26            right++;
27        }
28
29        left = i;
30        right = i + 1;
31
32        while (left >= 0 && right < n &&
33               s[left] == s[right]) {
34
35            if (left == 0)
36                dp[right] = 0;
37            else if (dp[left - 1] + 1 < dp[right])
38                dp[right] = dp[left - 1] + 1;
39
40            left--;
41            right++;
42        }
43    }
44
45    int ans = dp[n - 1];
46
47    free(dp);
48
49    return ans;
50}
51