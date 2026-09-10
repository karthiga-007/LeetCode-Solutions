// Last updated: 9/10/2026, 11:20:48 AM
1int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
2    long long product;
3    int count = 0;
4
5    for (int i = 0; i < numsSize; i++) {
6
7        product = 1;
8
9        for (int j = i; j < numsSize; j++) {
10
11            // Prevent overflow before multiplying
12            if (product >= k ) {
13                break;
14            }
15
16            product = product * nums[j];
17
18            if (product < k) {
19                count++;
20            }
21        }
22    }
23
24    return count;
25}