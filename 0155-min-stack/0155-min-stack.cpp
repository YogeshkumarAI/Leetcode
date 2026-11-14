class MinStack {
private:
    int TopIndex;
public:
    vector<int> arr;
    stack<int> minStack;

    MinStack() {    
        TopIndex = -1;
    }
    
    void push(int value) {
        arr.push_back(value);
            TopIndex++;

        if(minStack.empty() || value <= minStack.top()) {
             minStack.push(value);
            }
    }
    
    void pop() {
        if(TopIndex == -1)
            return;
        
        if(arr.back() == minStack.top()) {
            minStack.pop();
    }

        arr.pop_back();
        TopIndex--;
    }
    
    int top() {
        if(TopIndex == -1)
            return -1;

        return arr[TopIndex];
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */