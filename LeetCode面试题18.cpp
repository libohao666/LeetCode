/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (head->val == val) return head->next;
        ListNode *p = head, *q;
        while (p) {
            if (p->val == val) q->next = p->next;
            q = p;
            p = p->next;
        }
        return head;
    }
};
