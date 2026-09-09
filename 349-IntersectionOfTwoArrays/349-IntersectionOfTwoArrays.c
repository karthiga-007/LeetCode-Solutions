// Last updated: 9/9/2026, 9:16:10 AM
int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize) {

    int* ans = malloc(1000 * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {

        for (int j = 0; j < nums2Size; j++) {

            if (nums1[i] == nums2[j]) {

                int found = 0;

                for (int k = 0; k < *returnSize; k++) {
                    if (ans[k] == nums1[i]) {
                        found = 1;
                    }
                }

                if (found == 0) {
                    ans[*returnSize] = nums1[i];
                    (*returnSize)++;
                }

                break;
            }
        }
    }

    return ans;
}