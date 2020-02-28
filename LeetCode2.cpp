/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *getNewNode(int val) {
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int j = 0, d;
    struct ListNode *tmp = getNewNode(0);
    struct ListNode *ans = tmp;
    while (l1 != NULL || l2 != NULL || j) {
        int sum = j;
        if (l1 != NULL) sum += l1->val, l1 = l1->next;
        if (l2 != NULL) sum += l2->val, l2 = l2->next;
        d = sum % 10;
        j = sum / 10;
        ans->next = getNewNode(d);
        ans = ans->next;
    }
    ans = tmp->next;
    free(tmp);
    return ans;
}
