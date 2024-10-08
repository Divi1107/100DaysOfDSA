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
    ListNode* reversepalin(ListNode* head)
    {
        ListNode* temp = head;
        ListNode* prev = NULL;
        
        while(temp!=NULL)
        {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        bool ans = false;
        if(head==NULL || head->next==NULL)
        {
            ans = true;
            return ans;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!= NULL && fast->next!= NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* right = reversepalin(slow->next); //pass the head
        ListNode* temp = head;
        while(right!=NULL)
        {
            if(temp->val == right->val)
            {
                temp = temp->next;
                right = right->next;
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
