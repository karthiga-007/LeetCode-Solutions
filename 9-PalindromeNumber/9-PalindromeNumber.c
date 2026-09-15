// Last updated: 9/15/2026, 11:04:25 AM
1bool isPowerOfTwo(int n){
2    if(n == 1)
3        return true;
4    else if(n == 0)
5        return false;
6    else if(n % 2 != 0)
7        return false;
8    return isPowerOfTwo(n/2);
9}