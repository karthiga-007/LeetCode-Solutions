// Last updated: 9/8/2026, 11:28:57 AM
1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4int* runningSum(int* nums, int numsSize, int* returnSize) {
5    *returnSize = numsSize;
6    int *prefix = (int*)malloc(numsSize*sizeof(int));
7    prefix[0] = nums[0];
8    for(int i=1; i < numsSize ; i++){
9        prefix[i] = prefix[i-1]+ nums[i];
10    }
11    return prefix;
12}