// Last updated: 9/15/2026, 10:12:20 AM
1bool isPalindrome(int x) {
2    if(x < 0){
3        return false;
4    }
5
6    int og = x;
7    long long rev = 0;
8
9    while(x != 0){
10        int i = x % 10;
11        rev = rev * 10 + i;
12        x = x / 10;
13    }
14
15    if(rev == og){
16        return true;
17    }
18
19    return false;
20}