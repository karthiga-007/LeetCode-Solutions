// Last updated: 9/22/2026, 11:20:18 AM
1int romanToInt(char* s) {
2    int total = 0;
3
4    for(int i = 0; s[i] != '\0'; i++) {
5
6        int curr, next = 0;
7
8        if(s[i] == 'I') curr = 1;
9        else if(s[i] == 'V') curr = 5;
10        else if(s[i] == 'X') curr = 10;
11        else if(s[i] == 'L') curr = 50;
12        else if(s[i] == 'C') curr = 100;
13        else if(s[i] == 'D') curr = 500;
14        else curr = 1000;
15
16        if(s[i + 1] != '\0') {
17            if(s[i + 1] == 'I') next = 1;
18            else if(s[i + 1] == 'V') next = 5;
19            else if(s[i + 1] == 'X') next = 10;
20            else if(s[i + 1] == 'L') next = 50;
21            else if(s[i + 1] == 'C') next = 100;
22            else if(s[i + 1] == 'D') next = 500;
23            else next = 1000;
24        }
25
26        if(curr < next)
27            total -= curr;
28        else
29            total += curr;
30    }
31
32    return total;
33}