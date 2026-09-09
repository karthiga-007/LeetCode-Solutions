// Last updated: 9/9/2026, 8:58:56 AM
1bool canJump(int* nums, int numsSize) {
2
3    int farthest = 0;
4
5    for (int i = 0; i < numsSize; i++) {
6
7        if (i > farthest) {
8            return false;
9        }
10
11        if (i + nums[i] > farthest) {
12            farthest = i + nums[i];
13        }
14    }
15
16    return true;
17}