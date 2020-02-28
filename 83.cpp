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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* ptr{ head };
        while (ptr->next != NULL)
        {
            if (ptr->val == ptr->next->val)
            {
                ListNode* p = ptr->next;  
                ptr->next = p->next;
                delete p;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        return head;
    }
};
