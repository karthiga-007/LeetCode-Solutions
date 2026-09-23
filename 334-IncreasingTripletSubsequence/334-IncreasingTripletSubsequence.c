// Last updated: 9/23/2026, 10:06:20 AM
1int wiggleMaxLength(int* nums, int numsSize) {
2    if(numsSize==0)
3    return 0;
4    int up=1,dwn=1;
5    for(int i=1;i<numsSize;i++){
6        if(nums[i]>nums[i-1])
7        up=dwn+1;
8        else if(nums[i]<nums[i-1])
9        dwn=up+1;
10    }
11    return up>dwn?up:dwn;
12}