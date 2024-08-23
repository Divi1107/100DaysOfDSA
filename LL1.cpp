class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node *head = new Node(arr[0]); //by passing the 1st elemetn we get the address/ref to the head
        Node * mov = head; //we will be storing head ka adr in mover 
        for(int i = 1;i<arr.size();i++)
        {
            Node * temp = new Node(arr[i]); //temp is to  help it iterate using mover
            mov->next = temp;//head(mov) du next we point to temp
            mov=temp; //we need to make mov point to temp            
        }
        return head;
    }
};
