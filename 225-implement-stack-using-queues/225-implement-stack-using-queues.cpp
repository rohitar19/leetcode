class MyStack {
    
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty())
            return 0;
        while(q1.size()>1){
            int ele=q1.front();
            q2.push(ele);
            q1.pop();
        }
        int d= q1.front();
        q1.pop();
        swap(q1,q2);
        return d;
        
    }
    
    int top() {
        while(q1.size()>1){
            int ele=q1.front();
            q2.push(ele);
            q1.pop();
        }
        int ele=q1.front();
        q1.pop();
        q2.push(ele);
        swap(q1,q2);
        return ele;
    }
    
    bool empty() {
        return q1.size()==0;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */