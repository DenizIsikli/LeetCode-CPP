class MyCircularDeque {
public:
    struct Node {
        int val;
        Node* next;
        Node* prev;
        Node(int x) : val(x), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    Node* tail;
    int size;
    int capacity;

    MyCircularDeque(int k) {
        head = new Node(-1);
        tail = new Node(-1);
        head->next = tail;
        tail->prev = head;
        size = 0;
        capacity = k; 
    }
    
    bool insertFront(int value) {
        if (size == capacity) {
            return false;
        }
        Node* newNode = new Node(value);
        Node* next = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = next;
        next->prev = newNode;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if (size == capacity) {
            return false;
        }
        Node* newNode = new Node(value);
        Node* prev = tail->prev;
        tail->prev = newNode;
        newNode->next = tail;
        newNode->prev = prev;
        prev->next = newNode;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (size == 0) {
            return false;
        }
        Node* next = head->next->next;
        head->next = next;
        next->prev = head;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (size == 0) {
            return false;
        }
        Node* prev = tail->prev->prev;
        tail->prev = prev;
        prev->next = tail;
        size--;
        return true;
    }
    
    int getFront() {
        if (size == 0) {
            return -1;
        }
        return head->next->val;
    }
    
    int getRear() {
        if (size == 0) {
            return -1;
        }
        return tail->prev->val;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
