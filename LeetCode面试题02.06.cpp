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
    ListNode *reverse(ListNode *head) {
        ListNode ret = ListNode(0), *p = head, *q;
        while (p) {
            q = p->next;
            p->next = ret.next;
            ret.next = p;
            p = q;
        }
        return ret.next;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *p = head, *q = head;
        while (q && q->next) {
            p = p->next;
            q = q->next->next;
        }
        p = reverse(p);
        while (head && p) {
            if (head->val != p->val) return false;
            head = head->next;
            p = p->next;
        }
        return true;
    }
};
