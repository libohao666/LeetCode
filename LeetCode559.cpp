class Solution {
public:
    int maxDepth(Node* root) {
        if (!root) return 0;
        int max = 0, tmp;
        for (int i = 0; i < root->children.size(); i++) {
            tmp = maxDepth(root->children[i]);
            if (tmp > max) max = tmp;
        }
        return 1 + max;
    }
};
