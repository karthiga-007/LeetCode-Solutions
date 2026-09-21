// Last updated: 9/21/2026, 8:55:58 PM
1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
5    
6    int *ans=malloc(2*sizeof(int));
7    for(int i=0; i < numsSize; i++){
8        for(int j=i+1; j < numsSize; j++){
9            if(nums[i]+ nums[j]== target){
10                 ans[0] = i;
11                 ans[1]= j;
12                *returnSize = 2;
13                return ans;
14            }
15        }
16}
17     *returnSize=0;   
18    return ans;
19
20}