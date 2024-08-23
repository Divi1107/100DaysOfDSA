#include <iostream>
#include<vector>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = nullptr;
	}
	Node(int data,Node* next)
	{
		this->data = data;
		this->next = next;
	}
};
Node* convertLL(vector<int> arr)
{
	Node* head = new Node(arr[0]);
	Node *mov = head;//to iterate
	for(int i = 1; i<arr.size(); i++)
	{
		Node* temp = new Node(arr[i]);
		mov->next = temp;
		mov = temp;
	}
	return head;
}
Node* insertNode(Node* head,int ele,int k) //khali insert at a position, k is index
{
	if(head==NULL)
	{
		if(k==1) {
			return new Node(ele);
		}
		else
		{
			return head;
		}
	}
	if(k==1) //ins at head
	{
        Node *temp = new Node(ele);
        temp->next = head;
        return temp;
	}
	int count = 0;
	Node *temp = head;
	while(temp!=NULL)
	{
	    count++;
	    if(count == k-1)
	    {
	        Node *newnode = new Node(ele);
	        newnode->next = temp->next;
	        temp->next = newnode;
	        break;
	    }
	    temp = temp->next;
	}
	return head;
}
Node* insertvalue(Node* head,int ele,int val) //khali insert before a value, ele - to be inserted
{
	if(head==NULL)
	{
		return head;
	}
	if(head->data==val) //ins at head
	{
        Node *temp = new Node(ele);
        temp->next = head;
        return temp;
	}

	Node *temp = head;
	while(temp->next!=NULL)
	{
	
	    if(temp->next->data == val)
	    {
	        Node *newnode = new Node(ele);
	        newnode->next = temp->next;
	        temp->next = newnode;
	        break;
	    }
	    temp = temp->next;
	}
	return head;
}
int main()
{
	vector<int> arr = {2,3,4,5,6};
	Node *head = convertLL(arr);
	head = insertNode(head,100,4); //100 -ele, insert at 2nd pos
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	head = insertvalue(head,100,5); //100 -ele, insert before 5
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}

	return 0;
}
