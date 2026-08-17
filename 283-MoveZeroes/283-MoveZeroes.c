// Last updated: 8/17/2026, 7:27:35 PM
void moveZeroes(int* nums, int numsSize) {
     int arr[numsSize];
     int index=0,i;
     for(i=0;i<numsSize;i++){
        if(nums[i]!=0)
        {
            arr[index]=nums[i];
            index++;
        }
     }while(index<numsSize)
     {
        arr[index]=0;
        index++;
     }
     for(i=0;i<numsSize;i++)
     {
        nums[i]=arr[i];
     }
}