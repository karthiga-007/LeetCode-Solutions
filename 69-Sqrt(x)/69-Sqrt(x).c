// Last updated: 9/16/2026, 8:46:52 AM
1int longestPalindrome(char* s) {
2    int fr[256] = {0};
3
4    for(int i = 0; i < strlen(s); i++)
5        fr[s[i]]++;
6
7    int len = 0;
8    int odd = 0;
9
10    for(int i = 0; i < 256; i++) {
11        if(fr[i] % 2 == 0) {
12            len += fr[i];
13        }
14        else {
15            len += fr[i] - 1;
16            odd = 1;
17        }
18    }
19
20    if(odd == 1)
21        len++;
22
23    return len;
24}