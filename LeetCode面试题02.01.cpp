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
    ListNode* removeDuplicateNodes(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode *p = head, *q = NULL, *tmp = NULL;
        while (p) {
            tmp = p;
            q = p->next;
            while(q) {
                if (p->val == q->val)  tmp->next = q->next;
                else tmp = q;
                q = tmp->next;
            }
            p = p->next;
        }
        return head;
    }
};

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
    ListNode* removeDuplicateNodes(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        int a[20000] = {0};
        a[head->val] = 1;
        ListNode *p = head, *q = head->next;
        while(q) {
            if (a[q->val] == 0) {
                a[q->val] = 1;
                p = q;
                q = q->next;
            }
            else {
                p->next = q->next;
                q = p->next;
            }
        }
        return head;
    }
};

