// Last updated: 9/11/2026, 11:20:31 AM
1void reverseString(char* s, int sSize) {
2    char temp;
3
4    for (int i = 0; i < sSize / 2; i++) {
5        for (int j = sSize - 1 - i; j < sSize; j++) {
6            temp = s[i];
7            s[i] = s[j];
8            s[j] = temp;
9             break;
10
11        }
12    }
13}