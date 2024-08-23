struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; 

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        
        Node *temp = head;
        int c = 0;
       for(Node * i = temp; temp!=nullptr;temp = temp->next)
       {
       
           c++;
       }
       return c;
    }
};
