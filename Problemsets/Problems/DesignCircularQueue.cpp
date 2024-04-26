#include <vector>

class MyCircularQueue {
public:
    std::vector<int> arr;
    int s;

    MyCircularQueue(int k) {
        s = k;
    }

    bool enQueue(int value) {
        if(arr.size() == s) return false;
        else {
            arr.push_back(value);
            return true;
        }
    }

    bool deQueue() {
        if(arr.size() == 0) return false;
        for(int i=0; i<arr.size()-1; ++i) { arr[i] = arr[i+1]; }
        arr.pop_back();
        return true;
    }

    int Front() {
        if(arr.size() == 0) return -1;
        else return arr[0];
    }

    int Rear() {
        if(arr.size() == 0) return -1;
        else return arr[arr.size()-1];
    }

    bool isEmpty() {
        if(arr.size() == 0) return true;
        else return false;
    }

    bool isFull() {
        if(arr.size() == s) return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(s);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */