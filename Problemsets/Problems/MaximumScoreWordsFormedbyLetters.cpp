#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int solve(int idx, vector<string> &words, vector<char> &letters, vector<int> &score) {
        if (idx == words.size()) return 0;

        int pick = 0;
        bool isValid = true;
        string curr = words[idx];
        vector<char> tmp = letters;

        for (int i = 0; i < curr.size(); i++) {
            auto it = find(tmp.begin(), tmp.end(), curr[i]);
            if (it != tmp.end()) {
                pick += score[curr[i]-'a'];
                tmp.erase(it);
            } else {
                isValid = false;
                break;
            }
        }

        int totalPick = 0;
        if (isValid) totalPick = pick+solve(idx+1, words, tmp, score);
        int notPick = solve(idx+1, words, letters, score);
        return max(totalPick, notPick);
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        return solve(0, words, letters, score); 
    }
};
