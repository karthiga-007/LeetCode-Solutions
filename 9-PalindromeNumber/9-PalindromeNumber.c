// Last updated: 9/15/2026, 11:07:28 AM
1bool isPowerOfTwo(int n) {
2    if(n == 1){
3        return true;
4    }
5
6    else if(n ==0){
7        return false;
8    }
9
10    else if(n%2 != 0){
11        return false;
12    }
13
14    return isPowerOfTwo(n/2);
15}