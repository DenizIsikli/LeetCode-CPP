#include <queue>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string clearStars(string s) {
        int n = s.size();
        priority_queue<char, vector<char>, greater<>> pq;
        unordered_map<char, stack<int>> charIndices;
        vector<bool> vis(n, false);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                char peek = pq.top();
                pq.pop();

                int lastIdx = charIndices[peek].top();
                charIndices[peek].pop();

                vis[lastIdx] = true;
            } else {
                pq.push(s[i]);
                charIndices[s[i]].push(i);
            }
        }

        string res = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '*' && !vis[i]) {
                res += s[i];
            }
        }

        return res;
    }
};
