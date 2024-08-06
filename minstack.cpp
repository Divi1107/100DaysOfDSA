class MinStack {
public:
    int arr[1000000]; int topp;
    MinStack() {
         topp=-1;
    }
    
    void push(int val) {
        if(topp==1000)
        {
            return;
        }
        topp++;
        arr[topp] = val;
    }
    
    void pop() {
        if(topp==-1)
        {
            return;
        }
      //  int val = arr[top];
        topp--;
    }
    
    int top() {
       if(topp==-1)
        {
            return 0;
        }
        int val = arr[topp];
        return val; 
    }
    
    int getMin() {
        if((topp==-1))
        {
            return 0;
        }
        return  *min_element(arr,arr+topp+1);;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
