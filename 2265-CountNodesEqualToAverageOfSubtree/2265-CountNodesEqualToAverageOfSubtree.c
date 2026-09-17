// Last updated: 9/17/2026, 1:33:15 PM
int ans = 0;

void helper(struct TreeNode* root, int* sum, int* count) {
    if (root == NULL) {
        *sum = 0;
        *count = 0;
        return;
    }

    int leftSum, leftCount;
    int rightSum, rightCount;

    helper(root->left, &leftSum, &leftCount);
    helper(root->right, &rightSum, &rightCount);

    *sum = leftSum + rightSum + root->val;
    *count = leftCount + rightCount + 1;

    if (root->val == (*sum / *count)) {
        ans++;
    }
}

int averageOfSubtree(struct TreeNode* root) {
    ans = 0;

    int sum, count;

    helper(root, &sum, &count);

    return ans;
}