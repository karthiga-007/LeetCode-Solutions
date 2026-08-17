// Last updated: 8/17/2026, 7:29:29 PM
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int j = 0; 
    for (int i = 1; i < numsSize; i++) {
        if (nums[j] != nums[i]) {
            j++;
            nums[j] = nums[i]; 
        }
    }
    return j + 1;
}