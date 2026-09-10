// Last updated: 9/10/2026, 1:48:29 PM
1bool isAnagram(const char *s, const char *t) {
2    if (strlen(s) != strlen(t)) {
3        return false;
4    }
5
6    int count[26] = {0};
7
8    for (int i = 0; i < strlen(s); i++) {
9        count[s[i] - 'a']++;
10        count[t[i] - 'a']--;
11    }
12
13    for (int i = 0; i < 26; i++) {
14        if (count[i] != 0) {
15            return false;
16        }
17    }
18
19    return true;
20}