// Last updated: 9/17/2026, 11:30:16 AM
1int balancedString(char* s) {
2    int fr[256] = {0};
3
4    for (int i = 0; i < strlen(s); i++) {
5        fr[s[i]]++;
6    }
7
8    int req = strlen(s) / 4;
9
10    int extraQ = fr['Q'] - req;
11    int extraW = fr['W'] - req;
12    int extraE = fr['E'] - req;
13    int extraR = fr['R'] - req;
14
15    if (extraQ <= 0 && extraW <= 0 &&
16        extraE <= 0 && extraR <= 0) {
17        return 0;
18    }
19
20    int j = 0;
21    int minlen = strlen(s);
22
23    for (int i = 0; i < strlen(s); i++) {
24
25        fr[s[i]]--;
26
27        while (fr['Q'] <= req &&
28               fr['W'] <= req &&
29               fr['E'] <= req &&
30               fr['R'] <= req) {
31
32            if (i - j + 1 < minlen) {
33                minlen = i - j + 1;
34            }
35
36            fr[s[j]]++;
37            j++;
38        }
39    }
40
41    return minlen;
42}