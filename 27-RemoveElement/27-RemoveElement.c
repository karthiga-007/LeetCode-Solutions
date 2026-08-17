// Last updated: 8/17/2026, 7:29:20 PM
int removeElement(int* nums, int numsSize, int val) {
    int write = 0;
    for (int read = 0; read < numsSize; read++) {
        if (nums[read] != val) {
            nums[write] = nums[read];
            write++;
        }
    }
    return write; 
}