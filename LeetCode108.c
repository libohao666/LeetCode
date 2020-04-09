struct TreeNode *q(int l, int r, int *nums) {
    if (l > r) return NULL;
    int mid = (l + r) >> 1;
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = q(l, mid - 1, nums);
    root->right = q(mid + 1, r, nums);
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return q(0, numsSize - 1, nums);
}
