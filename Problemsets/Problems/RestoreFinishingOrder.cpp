#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>res;
        for(auto&x:order){
            auto it=find(friends.begin(),friends.end(),x);
            if(it!=friends.end()){
                res.push_back(x);
                friends.erase(it);
            }
        }
        for(auto&x:friends)res.push_back(x);
        return res;
    }
};
