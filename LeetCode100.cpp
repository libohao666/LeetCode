/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (p == NULL && q == NULL) return true;//都是空树
    if (p == NULL || q == NULL) return false;//有一棵树空
    if (p->val - q->val) return false;//值不同
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
