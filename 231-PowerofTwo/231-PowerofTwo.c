// Last updated: 9/11/2026, 9:41:31 AM
1bool isPowerOfTwo(int n){
2    if(n == 1)
3        return true;
4    else if(n == 0)
5        return false;
6    else if(n % 2 != 0)
7        return false;
8    return isPowerOfTwo(n/2);
9}