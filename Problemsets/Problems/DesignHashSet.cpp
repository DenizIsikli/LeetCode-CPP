#include <vector>

using namespace std;

class MyHashSet {
public:
    int n = 10000;
    vector<vector<int>> hashSet;

    MyHashSet() {
        hashSet.resize(n);
    }
    
    void add(int key) {
        int idx = key%n;
        for (int x : hashSet[idx]) {
            if (x == key) return;
        }
        hashSet[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = key%n;
        for (int i = 0; i < hashSet[idx].size(); i++) {
            if (hashSet[idx][i] == key) {
                hashSet[idx].erase(hashSet[idx].begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int idx = key%n;
        for (int x : hashSet[idx]) {
            if (x == key) return true;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
