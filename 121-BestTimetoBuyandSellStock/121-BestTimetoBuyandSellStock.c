// Last updated: 9/17/2026, 10:06:59 AM
1void moveZeroes(int* nums, int numsSize) {
2    int k = 0;
3    for(int i=0; i < numsSize; i++){
4        if(nums[i]!=0){
5            nums[k]=nums[i];
6            k++;
7        }
8    }
9
10    for(int j=k; j < numsSize; j++ ){
11        nums[j]=0;
12        
13    }
14}