// Last updated: 9/9/2026, 1:59:26 PM
1int maxSubArray(int* nums, int numsSize){
2    int maxSum = nums[0];
3    int maxSumSoFar = 0;
4    for(int i = 0; i < numsSize; i++){
5        maxSumSoFar += nums[i];
6        if(maxSum < maxSumSoFar){
7            maxSum = maxSumSoFar;
8        }
9        
10        if(maxSumSoFar < 0){
11            maxSumSoFar = 0;
12        }
13    }
14    return maxSum;      
15}