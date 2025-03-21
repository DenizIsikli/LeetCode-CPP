#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> fq;       
        char al = 'a';

        for (char &c : key) {
            if (c!=' ' && fq.find(c)==fq.end()) {
                fq[c] = al;
                al++;
            }
        }

        string s;
        for (char &c : message) {
            if (c==' ') s+=' ';
            else s+=fq[c];
        }

        return s;
    }
};
