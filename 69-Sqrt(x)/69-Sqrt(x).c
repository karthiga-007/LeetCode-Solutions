// Last updated: 9/15/2026, 8:14:44 PM
1int mySqrt(int x) {
2    if (x == 0)
3        return 0;
4
5    int i = 1;
6
7    while (i <= x / i) {
8        i++;
9    }
10
11    return i - 1;
12}