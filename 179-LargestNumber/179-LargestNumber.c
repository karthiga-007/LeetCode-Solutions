// Last updated: 9/23/2026, 11:51:38 AM
1int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
2int *ans = malloc(numsSize * sizeof(int));
3
4
5int pos = 0;
6int neg = 1;
7
8for(int i = 0; i < numsSize; i++) {
9    if(nums[i] > 0) {
10        ans[pos] = nums[i];
11        pos += 2;
12    }
13    else {
14        ans[neg] = nums[i];
15        neg += 2;
16    }
17}
18
19*returnSize = numsSize;
20return ans;
21
22
23}
24