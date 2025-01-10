#include <string>
#include <vector>

using namespace std;;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;

        vector<int> words2fq(26, 0);
        for (const string &word : words2) {
            vector<int> tempfq(26, 0);
            for (char c : word) {
                tempfq[c-'a']++;
            }

            for (int i = 0; i < 26; i++) {
                words2fq[i] = max(words2fq[i], tempfq[i]);
            }
        }
    
        auto isUniversal = [](const vector<int> &words1fq, const vector<int> &words2fq) -> bool {
            for (int i = 0; i < 26; i++) {
                if (words1fq[i]<words2fq[i]) return false;
            }
            return true;
        };

        for (const string &word : words1) {
            vector<int> words1fq(26, 0);
            for (char c : word) {
                words1fq[c-'a']++;
            }

            if (isUniversal(words1fq, words2fq)) {
                res.push_back(word);
            }
        }
        return res;
    }
};
