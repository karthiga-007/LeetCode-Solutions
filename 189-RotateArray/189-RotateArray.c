// Last updated: 8/17/2026, 7:28:00 PM
void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;  // handle k > n
    
    // Reverse entire array
    reverse(nums, 0, numsSize - 1);
    
    // Reverse first k elements
    reverse(nums, 0, k - 1);
    
    // Reverse remaining elements
    reverse(nums, k, numsSize - 1);
}