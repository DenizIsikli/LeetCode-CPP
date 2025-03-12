#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded;       
        decoded.push_back(first);
        for (int i = 0; i < encoded.size(); i++) {
            decoded.push_back(encoded[i] ^ decoded[i]); 
        }
        return decoded;
    }
};
