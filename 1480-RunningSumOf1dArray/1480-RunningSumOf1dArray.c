// Last updated: 9/9/2026, 9:15:42 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *prefix = (int*)malloc(numsSize*sizeof(int));
    prefix[0] = nums[0];
    for(int i=1; i < numsSize ; i++){
        prefix[i] = prefix[i-1]+ nums[i];
    }
    return prefix;
}