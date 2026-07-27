class MinStack {
public:
stack<int> stk;
stack<int> mins;
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(mins.empty()){
            mins.push(val);
        }
        else if(mins.top()>= val){
            mins.push(val);
        }
        stk.push(val);
        
    }
    
    void pop() {
         if(stk.top()==mins.top()){
            mins.pop();
        }
        stk.pop();
        
    }
    
    int top() {
        return stk.top();
        
    }
    
    int getMin() {
        return mins.top();
    }
};
