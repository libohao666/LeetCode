class Solution {
public:
    void deleteNode(ListNode* node) {
    	 ListNode* q=node->next;
    	 node->val=node->next->val;
    	 node->next=q->next;
    	 
    	 delete q;
    	 q=NULL;
    }
};
