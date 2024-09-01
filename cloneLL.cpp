/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void insertCopy(Node* head)
{
    Node* temp = head;
        while(temp!=NULL) //creating copy nodes
        {
            Node* ele = temp->next;
            Node* copyy = new Node(temp->val);
            copyy->next = ele;
            temp->next = copyy;
            temp = ele;
            //temp = temp->next->next;
        }
}
void connRandom(Node* head)
{
        Node* temp = head; 
        while(temp!=NULL) //conn random
        {
            Node* copyy = temp->next;
            if(temp->random)
            copyy->random = temp->random->next;
            else
            copyy->random = nullptr;
            temp = temp->next->next;
        }
}
Node* connNext(Node* head)
{
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;
        while(temp!= NULL) // conn next
        {
            res->next = temp->next;
            res = res->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummy->next;
}
    Node* copyRandomList(Node* head) {
        if(head==NULL) return head;
        insertCopy(head);
        connRandom(head);
        return connNext(head)  ; 
    }
};
