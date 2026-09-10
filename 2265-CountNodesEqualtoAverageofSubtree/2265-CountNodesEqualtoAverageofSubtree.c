// Last updated: 9/10/2026, 2:14:20 PM
1int ans = 0;
2
3void helper(struct TreeNode* root, int* sum, int* count) {
4    if (root == NULL) {
5        *sum = 0;
6        *count = 0;
7        return;
8    }
9
10    int leftSum, leftCount;
11    int rightSum, rightCount;
12
13    helper(root->left, &leftSum, &leftCount);
14    helper(root->right, &rightSum, &rightCount);
15
16    *sum = leftSum + rightSum + root->val;
17    *count = leftCount + rightCount + 1;
18
19    if (root->val == (*sum / *count)) {
20        ans++;
21    }
22}
23
24int averageOfSubtree(struct TreeNode* root) {
25    ans = 0;
26
27    int sum, count;
28
29    helper(root, &sum, &count);
30
31    return ans;
32}