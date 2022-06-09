class MyStack {
    
public:
    queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
     
        
       int s=q1.size();
        q1.push(x);
        for(int i =0 ; i< s ; i++){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
       if(q1.empty())
           return -1;
        else
        {int r =q1.front();
             q1.pop();
              return r;}
        
    }
    
    int top() {
      return q1.front();
        
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