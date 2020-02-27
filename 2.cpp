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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int j = 0;
    	int d;
    	ListNode *tmp = new ListNode(0);
    	ListNode *ans = tmp;
    	while(l1 || l2 || j){
    		int sum = j;
    		if(l1) {
    			sum = sum + l1->val;
    			l1 = l1->next;
			}
			if(l2) {
				sum = sum + l2->val;
    			l2 = l2->next;
			}
			d = sum % 10;
			j = sum / 10;
			ListNode *newdata = new ListNode(d);
			ans->next = newdata;
			ans = ans->next;
		}
		ans = tmp->next;
		delete tmp;
		return ans;
    }
};
