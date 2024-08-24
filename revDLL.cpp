class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        if(head==NULL || head->next == NULL)
        {
            return head;
        }
        DLLNode* last = NULL;
        DLLNode* curr = head;
        while(curr!=NULL)
        {
            last = curr->prev;
            curr->prev = curr->next;
            curr->next = last;
            curr = curr->prev; //to traverse rev
        }
        return last->prev;
        
    }
};
