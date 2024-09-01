/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL|| k==0) return head;
        ListNode* fast = head; 
        int len=1;
        while(fast->next ) 
        {
            fast = fast->next; len++;
        }
        fast->next = head;
        k = k%len;//reduce k
        k = len-k;
        while(k--)
        {
            fast = fast->next;
        }
        head = fast->next;
        fast->next = NULL;
        return head;
    }
};
