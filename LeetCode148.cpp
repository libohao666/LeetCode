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
        while (head) head= head->next, ret += 1;
        return ret;
    }

    static int cmp(const void *a, const void *b) {
        return ((ListNode *)a)->val < ((ListNode *)b)->val;
    }

    ListNode* sortList(ListNode* head) {
        int n = getLength(head);
        if (n <= 1) return head;
        ListNode **arr = (ListNode **)malloc((n + 1) * sizeof(ListNode *));
        for (int i = 0; i < n; i++) {
            arr[i] = head;
            head = head->next;
        }
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n - 1; i++) {
            arr[i]->next = arr[i + 1];
        }
        arr[n - 1]->next = NULL;
        head = arr[0];
        free(arr);
        return head;
    }
};

