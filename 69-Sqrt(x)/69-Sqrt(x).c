// Last updated: 9/15/2026, 8:14:22 PM
1int mySqrt(int x) {
2    int left = 0;
3    int right = x >> 1;    //same as right = x / 2
4
5    if(x < 2)
6        return x;
7    
8    while(left <= right){
9        long mid = (left + right) >> 1;        //same as mid = (left + right) / 2;
10        if(mid * mid == x)
11            return mid;
12        else if(mid * mid < x)
13            left = mid + 1;
14        else
15            right = mid - 1; 
16    }
17    return left - 1;
18}