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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int len = getLength(head);
        if (len == k) return head;
        for (int i = 0; i < len - k; i++) {
            head = head->next;
        }
        return head;
    }
};
