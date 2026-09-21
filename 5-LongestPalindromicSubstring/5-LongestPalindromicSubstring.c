// Last updated: 9/21/2026, 10:05:03 AM
1int countSubstrings(char* s) {
2    int n = strlen(s);
3
4    if (n < 2)
5        return n;
6
7    int c = 0;
8
9    for (int i = 0; i < n; i++) {
10
11        // Odd length palindromes
12        int lef = i, rgt = i;
13
14        while (lef >= 0 && rgt < n && s[lef] == s[rgt]) {
15            c++;
16            lef--;
17            rgt++;
18        }
19
20        // Even length palindromes
21        lef = i;
22        rgt = i + 1;
23
24        while (lef >= 0 && rgt < n && s[lef] == s[rgt]) {
25            c++;
26            lef--;
27            rgt++;
28        }
29    }
30
31    return c;
32}