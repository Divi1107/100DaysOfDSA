class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() { }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int item;
        if (s1.empty() && s2.empty()) {
            return -1;
        }
        if(!s2.empty())
        {
        item = s2.top();
        s2.pop();
        return item;
        }
        else {
            while(!s1.empty())
            {
                item = s1.top();
                s1.pop();
                s2.push(item);
            }
            
        }
        item = s2.top();
         s2.pop();
         return item;
       
    }
    
    int peek() {
        if (s1.empty() && s2.empty()) {
            return -1;
        }
        if(!s2.empty())
        {
            int item = s2.top();
            return item;
        }
        else {
            while(!s1.empty())
            {
                int item = s1.top();
                s1.pop();
                s2.push(item);
            }
        }
        int item = s2.top();
        return item;
    }
    
    bool empty() {
        return s1.empty()&& s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
