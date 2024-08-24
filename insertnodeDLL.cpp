#include <iostream>
#include<vector>
using namespace std;
class Node
{
    public: int data;
            Node* next;
            Node* back;
            Node(int data, Node* next, Node* back)
            {
                this->data = data;
                this->next = next;
                this->back = back;
            }
            Node(int data)
            {
                this->data = data;
                back = nullptr;
                next = nullptr;
            }
};
void printDLL(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* convertArrDLL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}
Node* insertbfrHead(Node* head,int val)
{
    Node* newhead = new Node(val,head,nullptr);
    newhead->next = head;
    return newhead;
}
Node* insertbfrTail(Node*head,int val)
{
    Node* tail = head;
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newnode = new Node(val,tail,prev);
    prev->next = newnode;
    newnode->next = tail;
    return head;
}
Node* insertKnode(Node *head, int val,int k) //k = pos
{
    if(head==NULL)
    {
        return NULL;
    }
    if(k==1)
    {
        return insertbfrHead(head,val);
    }
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        if(count==k)
        {
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newnode = new Node(val,temp,prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}
int main()
{
    vector<int>arr  = {11,32,34,84,65};
    Node* head = convertArrDLL(arr);
   //head = insertbfrHead(head,2);
   //head = insertbfrTail(head,7);
   head = insertKnode(head,4,2);
    printDLL(head);
    return 0;
}
