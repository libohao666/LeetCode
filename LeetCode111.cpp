/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int l = minDepth(root->left), r = minDepth(root->right);
    int min = l < r ? l : r, max = l > r ? l : r;
    if (root->left == NULL || root->right == NULL) return 1 + max;
    return 1 + min;
}
