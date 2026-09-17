// Last updated: 9/17/2026, 10:10:38 AM
1int equalSubstring(char* s, char* t, int maxCost) {
2    int maxlen = 0;
3    int cost = 0;
4    int j = 0;
5
6    for (int i = 0; i < strlen(s); i++) {
7        cost += abs(s[i] - t[i]);
8
9        while (cost > maxCost) {
10            cost -= abs(s[j] - t[j]);
11            j++;
12        }
13
14        if (i - j + 1 > maxlen) {
15            maxlen = i - j + 1;
16        }
17    }
18
19    return maxlen;
20}