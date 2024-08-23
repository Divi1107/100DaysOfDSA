class Solution {
  public:
    // Function to seach ele in a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        Node * temp = head;
        while(temp!=nullptr)
        {
            if(temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
    }
};
