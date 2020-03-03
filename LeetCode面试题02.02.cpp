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
    int getLength(ListNode *head) {
        int ret = 0;
        while (head) {
            ret += 1;
            head = head->next;
        }
        return ret;
    }

    int kthToLast(ListNode* head, int k) {
        int len = getLength(head);
        if (len == 1) return head->val;
        for (int i = 0; i < len - k; i++) {
            head= head->next;
        }
        return head->val;
    }
};
