class MyStack {
public:
    std::queue<int> main;
    std::queue<int> temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!main.empty()) {
            temp.push(main.front());
            main.pop();
        }
        std::swap(main, temp);
    }
    
    int pop() {
        int top = main.front();
        main.pop();
        return top;
    }
    
    int top() {
        return main.front();
    }
    
    bool empty() {
        return main.empty();
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