#include <stack>

class MyQueue {
public:
    MyQueue() {}
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        if (stack2.empty()) {
            moveStack1ToStack2();
        }
        int top = stack2.top();
        stack2.pop();
        return top;
    }
    
    int peek() {
        if (stack2.empty()) {
            moveStack1ToStack2();
        }
        return stack2.top();
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
    }

private:
    std::stack<int> stack1;
    std::stack<int> stack2;

    void moveStack1ToStack2() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
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