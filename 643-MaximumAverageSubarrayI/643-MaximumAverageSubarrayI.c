// Last updated: 9/10/2026, 9:04:14 AM
1double findMaxAverage(int* nums, int numsSize, int k) {
2     int sum = 0;
3
4     for(int i = 0 ; i < k; i++){
5        sum = sum + nums[i];
6     }
7
8     int max_sum = sum;
9
10     for(int i = 0; i < numsSize - k; i++){
11        sum = sum - nums[i] + nums[i+k];
12     
13
14     if(sum > max_sum){
15        max_sum = sum;
16     }
17     }
18
19
20return(double)max_sum/k;
21}