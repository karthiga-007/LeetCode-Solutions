// Last updated: 9/9/2026, 9:15:40 AM
int findMiddleIndex(int* nums, int numsSize) {
        int * pf = (int*)malloc((numsSize+1) * sizeof(int));
    pf[0] =0;
    for(int i = 1; i <= numsSize; i++){
        pf[i] = pf[i-1]+nums[i-1];
    }

    for(int i =1; i <= numsSize ; i++){
        if(pf[i-1] == pf[numsSize]- pf[i]){
            return i-1;
        }
    }
    return -1;
}
