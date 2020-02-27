/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *cur = head;
    struct ListNode *pre = NULL;
    while (cur != NULL) {
        struct ListNode *pnext = cur->next;
        cur->next = pre;
        pre = cur;
        cur = pnext;
    }
    return pre;
}
