//bruteforce
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        stack<int> st;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp = temp->next;
        }//
        //we have elements in stack so pop it.
        ListNode* newhead = new ListNode(st.top());
        st.pop();
        temp = newhead;
        int n = st.size()+1;
        for(int i = 1;i<n;i++)
        {
            int val = st.top();
            ListNode* newnode = new ListNode(val);
            st.pop();
            temp->next = newnode;
            temp = newnode;
        }
        return newhead;
    }
};

///////////////////////
//optimal
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while(curr!= NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
