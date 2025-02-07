#include <vector>
#include <utility>

using namespace std;

class MyHashMap {
public:
    int n = 10000;
    vector<vector<pair<int, int>>> map;

    MyHashMap() {
        map.resize(n);
    }
    
    void put(int key, int value) {
        int idx = key%n;
        for (auto &[a, b] : map[idx]) {
            if (a==key) {
                b = value;
                return;
            }
        }
        map[idx].push_back({key, value});
    }
    
    int get(int key) {
        int idx = key%n;
        for (auto &[a, b] : map[idx]) {
            if (a==key) {
                return b;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int idx = key%n;
        for (int i = 0; i < map[idx].size(); i++) {
            if (map[idx][i].first == key) {
                map[idx].erase(map[idx].begin()+i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
