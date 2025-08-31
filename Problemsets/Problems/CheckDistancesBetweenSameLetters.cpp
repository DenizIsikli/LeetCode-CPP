#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<distance.size();i++){
            int first=s.find(char('a'+i));
            if(first!=-1){
                int last=s.rfind(char('a'+i));
                if(last-first-1!=distance[i]) return false;
            }
        }
        return true;
    }
};
