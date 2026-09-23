// Last updated: 9/23/2026, 10:34:59 AM
1bool checkPossibility(int* nums, int numsSize) {
2    int c = 0;
3
4    for (int i = 1; i < numsSize; i++) {
5        if (nums[i] < nums[i - 1]) {
6            c++;
7
8            if (c > 1)
9                return false;
10
11            if (i == 1 || nums[i] >= nums[i - 2])
12                nums[i - 1] = nums[i];
13            else
14                nums[i] = nums[i - 1];
15        }
16    }
17
18    return true;
19}