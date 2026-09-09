// Last updated: 9/9/2026, 10:02:15 AM
1int findMaxConsecutiveOnes(int* nums, int numsSize) {
2    int count = 0;
3    int max_count = 0;
4
5    for(int i = 0; i < numsSize; i++) {
6
7        if(nums[i] == 1) {
8            count++;
9        }
10        else {
11            count = 0;
12        }
13
14        if(count > max_count) {
15            max_count = count;
16        }
17    }
18
19    return max_count;
20}