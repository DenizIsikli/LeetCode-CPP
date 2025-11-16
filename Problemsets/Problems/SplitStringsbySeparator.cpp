#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>res;
        for(auto&word:words){
            string temp;
            for(char c:word){
                if(c==separator){
                    if(!temp.empty()){
                        res.push_back(temp);
                        temp.clear();
                    }
                }else{
                    temp+=c;
                }
            }
            if(!temp.empty())res.push_back(temp);
        }
        return res;
    }
};
