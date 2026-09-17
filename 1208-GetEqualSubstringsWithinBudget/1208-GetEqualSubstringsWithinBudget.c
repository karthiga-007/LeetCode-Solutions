// Last updated: 9/17/2026, 10:34:55 AM
1int numberOfSubstrings(char* s) {
2    int j = 0;
3    int count[3] = {0};
4    int res = 0;
5
6    for (int i = 0; s[i] != '\0'; i++) {
7        count[s[i] - 'a']++;
8
9        while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
10            res += strlen(s) - i;
11            count[s[j] - 'a']--;
12            j++;
13        }
14    }
15
16    return res;
17}