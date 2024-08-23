struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==NULL) //list is empty
        {
            return new Node(x);
        }
        Node *temp = head; //if it has something
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }
        if(temp->next ==NULL)
        {
            Node *newnode = new Node(x);
            temp->next = newnode;
        }
        return head;
    }
};
