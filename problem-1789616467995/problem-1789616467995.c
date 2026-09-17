// Last updated: 9/17/2026, 9:11:07 AM
1int minSubArrayLen(int target, int* nums, int numsSize) {
2    int minlen = INT_MAX, sum=0;
3    for(int i=0,j=0; i < numsSize ; i++){
4        sum+=nums[i];
5        while(sum>=target){
6            minlen=fmin(minlen,i-j+1);
7            sum-=nums[j];
8            j++;
9        }
10    }
11    return minlen!=INT_MAX?minlen:0;
12}