// Last updated: 9/17/2026, 1:34:21 PM
int minSubArrayLen(int target, int* nums, int numsSize) {
    int minlen = INT_MAX, sum=0;
    for(int i=0,j=0; i < numsSize ; i++){
        sum+=nums[i];
        while(sum>=target){
            minlen=fmin(minlen,i-j+1);
            sum-=nums[j];
            j++;
        }
    }
    return minlen!=INT_MAX?minlen:0;
}