// Last updated: 9/11/2026, 9:59:33 AM
1int singleNumber(int* nums, int numsSize) {
2    int result = 0;
3
4    for(int i=0; i < numsSize ; i++){
5        result = result ^ nums[i];
6    }
7
8    return result;
9}