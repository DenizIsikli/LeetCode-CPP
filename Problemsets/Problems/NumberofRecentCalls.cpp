#include <vector>

using namespace std;

class RecentCounter {

    vector<int>pings;
    int st;

public:
    RecentCounter() {
        st=0;
    }

    
    int ping(int t) {
        pings.push_back(t);
        while(pings[st]<t-3000)st++;
        return pings.size()-st;
    }
};


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
