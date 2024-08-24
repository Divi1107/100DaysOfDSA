class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
//brute force wuld be counting number of nodes once (1 traversal) then checking if they are odd/even then traverse till 
//there then  return the rest. takes more time and space
