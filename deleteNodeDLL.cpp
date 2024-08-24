struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};

class Solution {
  public:
    Node* deleteHead(Node* head)
    {
        if(head==NULL || head->next == NULL)
        {
            return NULL;
        }
        
        Node* prev = head;
        head = head->next;
        prev->next = nullptr;
        head->prev = nullptr;
        delete prev;
        return head;
        
    }
Node* deleteTail(Node* head)
{
    if(head==NULL || head->next == NULL)
    {
        return NULL;
    } //null 
    Node* tail = head;
    while(tail->next!=NULL)
    {
        tail = tail->next; 
    }
    Node* newtail = tail->prev;
    tail->prev = nullptr;
    newtail->next = nullptr;
    delete tail;
    return head;
}
    Node* deleteNode(Node* head, int x) {
        
        int count = 0;
        Node* temp = head;
        while(temp!=NULL)
        {
            count++;
            if(count==x)
            {
                break;
                //temp is at the node to be deleted
            }
            temp = temp->next; 
        }
        Node* prev = temp->prev;
        Node* front = temp->next;
        if(prev==NULL && front == NULL)//only single node temp idre
        {
            delete temp;
            return NULL;
        }
        else if(prev==NULL)
        {
            return deleteHead(head);//means temp is head
            
        }
        else if(front==NULL)//temp is tail
        {
            return deleteTail(head);
            
        }
        //if both are not null
        prev->next = front;
        front->prev = prev;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
};
