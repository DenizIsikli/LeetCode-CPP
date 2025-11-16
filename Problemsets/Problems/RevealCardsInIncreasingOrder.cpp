#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        deque<int>dq;
        vector<int>res(deck.size());
        for(int i=0;i<deck.size();i++)dq.push_back(i);
        for(int card:deck){
            int idx=dq.front();
            dq.pop_front();
            res[idx]=card;
            if(!dq.empty()){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        return res;
    }
};
