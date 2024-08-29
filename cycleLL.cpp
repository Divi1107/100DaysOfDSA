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
    bool hasCycle(ListNode *head) {
        bool ans = false;
        if(head==NULL)
        {
            return ans;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            if(slow == fast)
            {
               ans = true;
               break;
            }
            else
            {
                ans = false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return ans;
    }
};
