// Last updated: 9/24/2026, 11:54:16 AM
1int smallestIndex(int* nums, int numsSize) {
2
3    for(int i = 0; i < numsSize; i++) {
4
5        int num = nums[i];
6
7        int digitSum = 0;
8
9        while(num > 0) {
10
11            digitSum += num % 10;
12
13            num /= 10;
14        }
15
16        if(digitSum == i) {
17
18            return i;
19        }
20    }
21
22    return -1;
23}