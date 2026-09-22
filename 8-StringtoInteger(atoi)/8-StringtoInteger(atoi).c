// Last updated: 9/22/2026, 10:16:32 AM
1#include <limits.h>
2
3int myAtoi(char* s) {
4    long long num = 0;
5    int neg = 1;
6    int i = 0;
7
8    // Skip spaces
9    while(s[i] == ' ')
10        i++;
11
12    // Check sign
13    if(s[i] == '-') {
14        neg = -1;
15        i++;
16    }
17    else if(s[i] == '+') {
18        i++;
19    }
20
21    // Read digits
22    while(s[i] >= '0' && s[i] <= '9') {
23        num = num * 10 + (s[i] - '0');
24
25        // Check overflow
26        if(neg == 1 && num > INT_MAX)
27            return INT_MAX;
28
29        if(neg == -1 && -num < INT_MIN)
30            return INT_MIN;
31
32        i++;
33    }
34
35    return neg * num;
36}