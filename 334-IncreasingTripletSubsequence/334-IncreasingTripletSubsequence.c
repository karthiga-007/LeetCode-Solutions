// Last updated: 9/23/2026, 8:51:11 AM
1bool increasingTriplet(int* nums, int numsSize) {
2    int fmin= INT_MAX, smin = INT_MAX;
3    for(int i=0; i < numsSize;i++){
4        if(nums[i]<=fmin)
5        fmin=nums[i];
6        else if(nums[i]<=smin)
7        smin=nums[i];
8        else
9        return true;
10    }
11    return false;
12}