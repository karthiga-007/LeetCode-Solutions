// Last updated: 9/15/2026, 11:24:09 AM
1int singleNumber(int* nums, int numsSize) {
2    for(int i = 0; i < numsSize; i++) {
3        int count = 0;
4
5        for(int j = 0; j < numsSize; j++) {
6            if(nums[i] == nums[j]) {
7                count++;
8            }
9        }
10
11        if(count == 1) {
12            return nums[i];
13        }
14    }
15
16    return 0;
17}