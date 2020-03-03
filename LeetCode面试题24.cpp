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
    ListNode* reverseList(ListNode* head) {
        ListNode ret = ListNode(0), *p = head, *q;
        while (p) {
            q = p->next;
            p->next = ret.next;
            ret.next = p;
            p = q;
        }
        return ret.next;
    }
};
