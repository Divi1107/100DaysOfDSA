class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* prev = head;
        int n = arr.size();
        for(int i = 1;i<n;i++)
        {
            Node* temp = new Node(arr[i]);
            prev->next = temp;
            temp->prev=prev;
            prev = prev->next;
        }
         return head;
    }
};
