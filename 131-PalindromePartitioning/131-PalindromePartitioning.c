// Last updated: 9/21/2026, 1:52:39 PM
1int longestPalindromeSubseq(char* s) {
2    int n = strlen(s);
3
4    if (n == 0)
5        return 0;
6
7    int *dp = (int*)calloc(n, sizeof(int));
8
9    for (int i = n - 1; i >= 0; i--) {
10
11        dp[i] = 1;
12        int prev = 0;
13
14        for (int j = i + 1; j < n; j++) {
15
16            int temp = dp[j];
17
18            if (s[i] == s[j]) {
19                dp[j] = prev + 2;
20            }
21            else {
22                if (dp[j - 1] > dp[j])
23                    dp[j] = dp[j - 1];
24            }
25
26            prev = temp;
27        }
28    }
29
30    int ans = dp[n - 1];
31
32    free(dp);
33
34    return ans;
35}