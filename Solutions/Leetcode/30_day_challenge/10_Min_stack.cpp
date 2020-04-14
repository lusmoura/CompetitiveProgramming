class MinStack {
public:
    /** initialize your data structure here. */
    stack <pair<int, int>> st;
    
    MinStack() {
        
    }
    
    void push(int x) {
        int y = x;
        if (!st.empty()) y = min(x, st.top().second);
            
        st.push({x, y});    
    }
    
    void pop() {
        if (st.empty()) return;
        st.pop();
    }
    
    int top() {
        if (st.empty()) return -1;
        
        return st.top().first;
    }
    
    int getMin() {
        if (st.empty()) return -1;
        
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */