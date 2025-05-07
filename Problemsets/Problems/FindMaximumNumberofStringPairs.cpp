#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        vector<bool> vis(words.size(), false);
        
        for (int i = 0; i < words.size(); ++i) {
            if (vis[i]) continue;
            string reversedWord = words[i];
            reverse(reversedWord.begin(), reversedWord.end());
            
            for (int j = i + 1; j < words.size(); ++j) {
                if (!vis[j] && words[j] == reversedWord) {
                    cnt++;
                    vis[i] = vis[j] = true;
                    break;
                }
            }
        }
        
        return cnt;
    }
};
