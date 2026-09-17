// Last updated: 9/17/2026, 1:35:01 PM
int maxSubArray(int* nums, int numsSize){
    int maxSum = nums[0];
    int maxSumSoFar = 0;
    for(int i = 0; i < numsSize; i++){
        maxSumSoFar += nums[i];
        if(maxSum < maxSumSoFar){
            maxSum = maxSumSoFar;
        }
        
        if(maxSumSoFar < 0){
            maxSumSoFar = 0;
        }
    }
    return maxSum;      
}