// Last updated: 8/17/2026, 7:28:13 PM
int singleNumber(int* nums, int numsSize) {
    int total = 0;
    for(int i =0; i < numsSize; i++){
         total = nums[i]^total;
    }
    return total;
}