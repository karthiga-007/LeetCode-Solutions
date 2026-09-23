// Last updated: 9/23/2026, 11:20:44 AM
1#include <stdio.h>
2#include <stdlib.h>
3#include <string.h>
4
5int compare(const void *a, const void *b) {
6    char ab[22], ba[22];
7
8    sprintf(ab, "%d%d", *(int*)a, *(int*)b);
9    sprintf(ba, "%d%d", *(int*)b, *(int*)a);
10
11    return strcmp(ba, ab);
12}
13
14char* largestNumber(int* nums, int numsSize) {
15    
16    qsort(nums, numsSize, sizeof(int), compare);
17
18    char *ans = malloc(numsSize * 12 + 1);
19    ans[0] = '\0';
20
21    for(int i = 0; i < numsSize; i++) {
22        char temp[12];
23
24        sprintf(temp, "%d", nums[i]);
25        strcat(ans, temp);
26    }
27
28    if(ans[0] == '0') {
29        ans[1] = '\0';
30    }
31
32    return ans;
33}