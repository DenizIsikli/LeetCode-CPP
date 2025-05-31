#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool allSame(const vector<int>& freq) {
        int same = -1;
        for (auto& f : freq) {
            if (f == 0) continue;
            if (same == -1) same = f;
            else if (f != same) return false;
        }
        return true;
    }

    bool equalFrequency(string word) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (freq[i] == 0) continue;
            freq[i]--;
            if (allSame(freq))
                return true;
            freq[i]++;
        }
        return false;
    }
};