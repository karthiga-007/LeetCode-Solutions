// Last updated: 9/8/2026, 11:59:49 AM
1int pivotIndex(int* nums, int numsSize) {
2    int * pf = (int*)malloc((numsSize+1) * sizeof(int));
3    pf[0] =0;
4    for(int i = 1; i <= numsSize; i++){
5        pf[i] = pf[i-1]+nums[i-1];
6    }
7
8    for(int i =1; i <= numsSize ; i++){
9        if(pf[i-1] == pf[numsSize]- pf[i]){
10            return i-1;
11        }
12    }
13    return -1;
14}