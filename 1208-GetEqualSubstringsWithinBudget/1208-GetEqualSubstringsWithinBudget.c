// Last updated: 9/17/2026, 1:32:26 PM
1int longestSubstring(char* s, int k) {
2    int res = 0;
3
4    for(int t = 1; t <= 26; t++) {
5        int fr[256] = {0};
6        int i = 0, j = 0;
7        int unq = 0, atk = 0;
8
9        while(j < strlen(s)) {
10
11            if(fr[s[j]] == 0)
12                unq++;
13
14            fr[s[j]]++;
15
16            if(fr[s[j]] == k)
17                atk++;
18
19            while(unq > t) {
20                if(fr[s[i]] == k)
21                    atk--;
22
23                fr[s[i]]--;
24
25                if(fr[s[i]] == 0)
26                    unq--;
27
28                i++;
29            }
30
31            if(unq == t && atk == t) {
32                int len = j - i + 1;
33
34                if(len > res)
35                    res = len;
36            }
37
38            j++;
39        }
40    }
41
42    return res;
43}