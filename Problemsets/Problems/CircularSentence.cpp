#include <string>

class Solution {
public:
    bool isCircularSentence(std::string sentence) {
        bool res = false;
        int cnt = 1;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                cnt++;
            }
        }

        if (sentence[0]==sentence[sentence.size()-1]) {
            if (cnt>1) {
                for (int i = 0; i < sentence.size(); i++) {
                    if (sentence[i] == ' ') {
                        if (sentence[i-1]!=sentence[i+1]) {
                            res = false;
                            break;
                        } else {
                            res = true;
                        }
                    } 
                }
            } else {
                res = true;
            }
        }
        return res;
    }
};
