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
    ListNode* findmid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* mergesort(ListNode* left,ListNode* right)
    {
        ListNode* start = new ListNode(-1);
        ListNode* temp = start;
        while(left!=NULL && right != NULL){
            if(left->val < right->val)
            {
                temp->next = left;
                temp = left;
                left = left->next; 
            }
            else
            {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
         if(left)
            temp->next = left;
            else
            temp->next = right;

            return start->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* mid = NULL;
        ListNode* left = head;
        mid = findmid(head);
        ListNode* right = mid->next;
        mid->next = nullptr;
        left = sortList(left);
        right = sortList(right);
        ListNode* ans = mergesort(left,right);
        return ans;
    }
};
