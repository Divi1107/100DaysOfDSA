//delete node at - head,at k==1, given node k>1
#include <iostream>
#include <iomanip>
#include<vector>

using namespace std;
class Node
{
    public: 
        int data;
        Node *next;
    Node(int data,Node *next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
Node *convertLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mov = head;
    for(int i = 1;i<arr.size();i++)
    {
        Node * temp = new Node(arr[i]);
        mov->next = temp;
        mov = temp;
    }
    return head;
}
Node* deletenode(Node* head,int k)
{
    if(head == NULL) return head;
    if(k==1)
    {
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL)
    {
        count++;
        if(count == k)
        {
            prev->next = prev->next->next; 
            //free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    std::vector<int> arr = {4, 5, 7, 3, 8};
    Node* head = convertLL(arr); 
    head = deletenode(head, 8); 
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
