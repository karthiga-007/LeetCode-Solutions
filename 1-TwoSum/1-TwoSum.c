// Last updated: 9/8/2026, 9:03:28 AM
1int* twoSum(int* nums, int  N, int target, int* returnSize){
2    int *arr = malloc(2*sizeof(int));
3    *returnSize = 2;
4    for(int i=0; i < N-1; i++){
5        for(int j=i+1; j < N; j++){
6            if(nums[i] + nums[j] == target){
7                arr[0] = i; arr[1] = j;
8                return arr;
9            }
10        }
11    }
12    return arr;
13}