
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        if(rear==100005)
        {
            return;
        }
        else
        {
            
            arr[rear] = x;
            rear++;
            //return;
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Codeint 
        int it;
        if(front==rear)
        {
            return -1;
        }
        else
        {
            it = arr[front];
            front++;
            return it;
        }
}
