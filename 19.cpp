/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int j = 0, i = 1;
    int length;
    struct ListNode *p,*temp;
    p =(struct ListNode *)malloc(sizeof(struct ListNode));
    p = head;
    while(p != NULL){

        p =p->next;
        j++;
    }
    length = j;
    p = head;
    if(length == 1){
        head = NULL;
        return head;
    }
    if(length == n){
        temp = head;
        head = head->next;
        temp = NULL;
    }
    
    while(i != length-n+1 && p != NULL && p->next != NULL){

        if(i != length - n){
            p = p->next;
            i++;
        }
        else if(i == length-1){
            p->next = NULL;
            return head;
        }
        
        else{
            temp = p->next;
            p->next = temp->next;
            i++;
        }
    }
    printf("%d %d",length,i);
    
    return head;

}
