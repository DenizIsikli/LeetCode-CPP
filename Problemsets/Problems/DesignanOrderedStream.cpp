#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class OrderedStream {
public:
    unordered_map<int, string> stream;
    int ptr = 1;

    OrderedStream(int n) {
        stream.clear();
        ptr = 1;
    }
    
    vector<string> insert(int idKey, string value) {
        stream[idKey] = value;
        vector<string> res;
        while (stream.find(ptr) != stream.end()) {
            res.push_back(stream[ptr]);
            ptr++;
        }
        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
