// Last updated: 9/16/2026, 9:03:13 AM
1int removeDuplicates(int* nums, int numsSize) {
2    if (numsSize == 0) return 0;
3
4    int k = 1;
5    for (int i = 0; i < numsSize - 1; i++) {
6        if (nums[i] != nums[i + 1]) {
7            nums[k] = nums[i + 1];
8            k++;
9        }
10    }
11    return k;
12}